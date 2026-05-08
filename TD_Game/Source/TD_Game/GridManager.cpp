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

int32 AGridManager::GetIslandIndex(int32 x, int32 y)
{
	if (x < 0 || y < 0 || x >= gridSize || y >= gridSize)
		return INDEX_NONE;

	return x * gridSize + y;
}

uint8 AGridManager::ComputeCornerMask(int32 cornerX, int32 cornerY)
{
	uint8 mask = 0;

	// surrounding islands
	int32 i0 = GetIslandIndex(cornerX - 1, cornerY - 1); // TL
	int32 i1 = GetIslandIndex(cornerX, cornerY - 1); // TR
	int32 i2 = GetIslandIndex(cornerX - 1, cornerY);     // BL
	int32 i3 = GetIslandIndex(cornerX, cornerY);     // BR

	if (i0 != INDEX_NONE && islands[i0]->isPlaced) mask |= TopLeft;
	if (i1 != INDEX_NONE && islands[i1]->isPlaced) mask |= TopRight;
	if (i2 != INDEX_NONE && islands[i2]->isPlaced) mask |= BottomLeft;
	if (i3 != INDEX_NONE && islands[i3]->isPlaced) mask |= BottomRight;

	return mask;
}

void AGridManager::ResolveCorner(uint8 mask, ECornerType& outType, int32& outRotation)
{
	switch (mask)
	{
	case 0:
		outType = ECornerType::None;
		break;
	//Corners
	case TopLeft:
		outType = ECornerType::Corner;
		outRotation = 270;
		break;

	case TopRight:
		outType = ECornerType::Corner;
		outRotation = 0;
		break;

	case BottomLeft:
		outType = ECornerType::Corner;
		outRotation = 180;
		break;

	case BottomRight:
		outType = ECornerType::Corner;
		outRotation = 90;
		break;
	//Sides
	case TopLeft | TopRight:
		outType = ECornerType::Side;
		outRotation = 270;
		break;

	case BottomLeft | BottomRight:
		outType = ECornerType::Side;
		outRotation = 90;
		break;

	case TopLeft | BottomLeft:
		outType = ECornerType::Side;
		outRotation = 180;
		break;

	case TopRight | BottomRight:
		outType = ECornerType::Side;
		outRotation = 0;
		break;
	//Double Corner (two islands with one vertex)
	case TopLeft | BottomRight:
		outType = ECornerType::DoubleCorner;
		outRotation = 90;
		break;
	case TopRight | BottomLeft:
		outType = ECornerType::DoubleCorner;
		break;
	//L Shapes
	case TopRight | BottomLeft | BottomRight: //  TL
		outType = ECornerType::InnerCorner;
		outRotation = 90;
		return;

	case TopLeft | BottomLeft | BottomRight: //  TR
		outType = ECornerType::InnerCorner;
		outRotation = 180;
		return;

	case TopLeft | TopRight | BottomRight: //  BL
		outType = ECornerType::InnerCorner;
		outRotation = 0;
		return;

	case TopLeft | TopRight | BottomLeft: //  BR
		outType = ECornerType::InnerCorner;
		outRotation = 270;
		return;

	
	case 15:
		outType = ECornerType::Center;
		break;

	default:
		outType = ECornerType::Center;
		break;
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
	FIntPoint hitPos = getGridLocation(location);
	if(hitPos.X < 0 || hitPos.X >= gridSize || hitPos.Y < 0 || hitPos.Y >= gridSize) {
		return FIntPoint(-1, -1);
	}
	DrawDebugSolidPlane(GetWorld(), FPlane(FVector(hitPos.X * tileSize, hitPos.Y * tileSize, 0.f), FVector::UpVector), FVector(hitPos.X * tileSize, hitPos.Y * tileSize, 100.f), FVector2D(50.f, 50.f), FColor::Blue, true, 0.f, uint8(12));
	return hitPos;
}

void AGridManager::PlaceIsland(FVector location)
{
	FIntPoint hitPos = getGridLocation(location);
	int32 islandIndex = GetIslandIndexFromLocation(hitPos);
	if (islandIndex < 0 || islandIndex >= islands.Num()) {
		return;
	}
	if(islands[islandIndex]->isPlaced) {
		return;
	}
	Island* island = islands[islandIndex];
	island->isPlaced = true;



	for (int i = 0; i < 4; i++)
	{
		int32 cornerIndex = island->cornerIndices[i];

		int32 x = cornerIndex / (gridSize + 1);
		int32 y = cornerIndex % (gridSize + 1);

		updateCorner(x,y);
	}
	island->isPlaced = true;
}

int32 AGridManager::GetIslandIndexFromLocation(FIntPoint location)
{
	return location.Y + location.X * gridSize;
}

FIntPoint AGridManager::getGridLocation(FVector loc)
{
	FIntPoint result = FIntPoint(FMath::RoundToInt(loc.X / tileSize), FMath::RoundToInt(loc.Y / tileSize));
	if (result.X < 0 || result.X >= gridSize || result.Y < 0 || result.Y >= gridSize) {
		return FIntPoint(-1, -1);
	}
	return result;
}

void AGridManager::updateCorner(int32 cornerX, int32 cornerY)
{
	int32 index = cornerX * (gridSize + 1) + cornerY;
	Corner* corner = corners[index];

	uint8 mask = ComputeCornerMask(cornerX, cornerY);

	ECornerType newType;
	int32 rotation = 0;

	ResolveCorner(mask, newType, rotation);

	corner->type = newType;
	corner->rotation = rotation;

	// Assign mesh based on type
	corner->mesh = cornerMeshes[newType]; // TMap<ECornerType, UStaticMesh*>

	if (!corner->meshComponent)
	{
		corner->meshComponent = NewObject<UStaticMeshComponent>(this);
		corner->meshComponent->RegisterComponent();
		corner->meshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}

	corner->meshComponent->SetStaticMesh(corner->mesh);
	corner->meshComponent->SetRelativeLocation(FVector(corner->position));
	corner->meshComponent->SetRelativeRotation(FRotator(0, rotation, 0));
	corner->meshComponent->SetCanEverAffectNavigation(true);
	corner->meshComponent->SetCollisionProfileName("BlockAll");
}

void AGridManager::setOccupied(int32 islandIndex)
{
	islands[islandIndex]->isOccupied = true;
}
