// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManager.h"

// Sets default values
AGridManager::AGridManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	generateCorners();
	generateIslands();
	DebugViewGrid();
	
}

void AGridManager::generateIslands()
{
	int32 index=0;

	for (int32 x = 0; x < gridSize; x++) {
		for (int32 y = 0; y < gridSize; y++) {
			Island* island = new Island();
			island->position = FIntPoint(x*tileSize, y*tileSize);
			for(int i=0; i<4; i++) {
				if (i == 2) {
					index += gridSize-1;
					island->cornerIndices[i] = index;
					index++;
				}
				else {
					island->cornerIndices[i] = index;
					index++;
				}
			}
			islands.Add(island);
			index -= gridSize + 2;
		}
		index++;
	}
}

void AGridManager::generateCorners()
{
	float halfSize = tileSize / 2.f;
	float sizeX = -halfSize;
	float sizeY = sizeX;
	for (int x = 0; x < gridSize + 1; x++) {
		sizeY = -halfSize;
		for (int y = 0; y < gridSize + 1; y++) {
			Corner* corner = new Corner();
			corner->position = FIntPoint(sizeX, sizeY);
			corner->type = ECornerType::None;
			corner->mesh = nullptr;
			//updateCorner(corner)
			corners.Add(corner);
			sizeY += tileSize;
		}
		sizeX += tileSize;
	}
}

void AGridManager::DebugViewGrid()
{
	for(Island* island : islands) {
		DrawDebugSphere(GetWorld(), FVector(island->position, 0.f), 20.f, 12, FColor::Green, true);
	}
	for (Corner* corner : corners) {
		DrawDebugSphere(GetWorld(), FVector(corner->position, 0.f), 10.f, 12, FColor::Red, true);
	}
}

// Called every frame
void AGridManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FIntPoint AGridManager::HighlightTile(FVector location)
{
	FIntPoint hitPos = FIntPoint(FMath::RoundToInt(location.X/tileSize), FMath::RoundToInt(location.Y/tileSize));
	if(hitPos.X < 0 || hitPos.X >= gridSize || hitPos.Y < 0 || hitPos.Y >= gridSize) {
		return FIntPoint(-1, -1);
	}
	DrawDebugSolidPlane(GetWorld(), FPlane(FVector(hitPos.X * tileSize, hitPos.Y * tileSize, 0.f), FVector::UpVector), FVector(hitPos.X * tileSize, hitPos.Y * tileSize, 100.f), FVector2D(50.f, 50.f), FColor::Blue, true, 0.f, uint8(12));
	return hitPos;
}

void AGridManager::PlaceIsland(FVector location)
{
	FIntPoint hitPos = FIntPoint(FMath::RoundToInt(location.X / tileSize), FMath::RoundToInt(location.Y / tileSize));
	int32 islandIndex = GetIslandIndexFromLocation(hitPos);
	if (islandIndex < 0 || islandIndex >= islands.Num()) {
		return;
	}
	static const int rotations[4] = { 90, 0, 180, 270 };

	for(int i=0; i<4; i++) {
		if (corners[islands[islandIndex]->cornerIndices[i]]->type == ECornerType::None) {
			corners[islands[islandIndex]->cornerIndices[i]]->type = ECornerType::Corner;
			corners[islands[islandIndex]->cornerIndices[i]]->rotation = rotations[i];
			
		}
		else if (corners[islands[islandIndex]->cornerIndices[i]]->type == ECornerType::Corner) {
			corners[islands[islandIndex]->cornerIndices[i]]->type = ECornerType::Side;
		}

		updateCorner(corners[islands[islandIndex]->cornerIndices[i]]);
	}

}

int32 AGridManager::GetIslandIndexFromLocation(FIntPoint location)
{
	return location.Y + location.X * gridSize;
}

void AGridManager::updateCorner(Corner* corner)
{
	if (!corner) return;

	// Assign mesh from map
	if (cornerMeshes.Contains(corner->type))
	{
		corner->mesh = cornerMeshes[corner->type];
	}

	if (!corner->mesh) return;

	if (!corner->meshComponent)
	{
		corner->meshComponent = NewObject<UStaticMeshComponent>(this);
		corner->meshComponent->RegisterComponent();
		corner->meshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}

	corner->meshComponent->SetStaticMesh(corner->mesh);

	FVector worldLocation = FVector(
		corner->position.X,
		corner->position.Y,
		0.f
	);

	FRotator worldRotation = FRotator(0.f, corner->rotation, 0.f);

	corner->meshComponent->SetWorldLocation(worldLocation);
	corner->meshComponent->SetWorldRotation(worldRotation);
}

