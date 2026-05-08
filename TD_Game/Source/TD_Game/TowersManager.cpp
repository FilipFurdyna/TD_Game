// Fill out your copyright notice in the Description page of Project Settings.


#include "TowersManager.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Tower.h"

// Sets default values
ATowersManager::ATowersManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GhostTowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GhostTowerMesh"));
	
	RootComponent = GhostTowerMesh;

	GhostTowerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void ATowersManager::BeginPlay()
{
	Super::BeginPlay();
	gridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
	GhostTowerMesh->SetStaticMesh(GhostTowerMeshAsset);
	
}

// Called every frame
void ATowersManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATowersManager::selectTower(int32 tower)
{
	if (tower < towers.Num())
	selectedTowerIndex = tower;
}

bool ATowersManager::getIsTowerAllowed(FVector location)
{
	FIntPoint gridLocation = gridManager->getGridLocation(location);
	if (gridLocation.X < 0 || gridLocation.X >= gridManager->gridSize || gridLocation.Y < 0 || gridLocation.Y >= gridManager->gridSize) {
		return false;
	}
	if(gridManager->islands[gridManager->GetIslandIndexFromLocation(gridLocation)]->isPlaced) {
		if (gridManager->islands[gridManager->GetIslandIndexFromLocation(gridLocation)]->isOccupied) return false;
		else {
			return true;
		}
	}
	return false;
}

void ATowersManager::placeTower(FVector location)
{
	FIntPoint gridLocation = gridManager->getGridLocation(location);
	if (getIsTowerAllowed(location))
	{
		FActorSpawnParameters spawnInfo;
		UClass* towerClass = towersDeck[selectedTowerIndex].TowerClass;
		towers.Add(GetWorld()->SpawnActor<ATower>(towerClass, FVector(gridLocation.X * gridManager->tileSize, gridLocation.Y * gridManager->tileSize, 10.0f), FRotator::ZeroRotator, spawnInfo));
		gridManager->setOccupied(gridManager->GetIslandIndexFromLocation(gridLocation));
	}
}

FIntPoint ATowersManager::showGhostTower(FVector location)
{
	FIntPoint gridLocation = gridManager->getGridLocation(location);
	GhostTowerMesh->SetWorldLocation(FVector(gridLocation.X * gridManager->tileSize, gridLocation.Y * gridManager->tileSize, 0.0f));
	if (getIsTowerAllowed(location)) {
		GhostTowerMesh->SetMaterial(0, ValidMaterial);
	}
	else {
		GhostTowerMesh->SetMaterial(0, InvalidMaterial);
	}

	return gridLocation;
}

