// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "GridManager.generated.h"

UENUM(BlueprintType)
enum class ECornerType : uint8
{
	None         UMETA(DisplayName = "None"),
	Corner       UMETA(DisplayName = "Corner"),
	Side         UMETA(DisplayName = "Side"),
	Center		 UMETA(DisplayName = "Center"),
	InnerCorner  UMETA(DisplayName = "Inner Corner"),
	DoubleCorner UMETA(DisplayName = "Double Corner")
};

enum ECornerMask
{
	TopLeft = 1 << 0, // 0001
	TopRight = 1 << 1, // 0010
	BottomLeft = 1 << 2, // 0100
	BottomRight = 1 << 3  // 1000
};

struct Island {
		FIntPoint position;
		int32 cornerIndices[4];

		bool isPlaced=false;
};


UCLASS()
class TD_GAME_API AGridManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridManager();
	

	struct Corner {
		FIntPoint position;
		ECornerType type;
		UStaticMesh* mesh;
		int32 rotation;
		UStaticMeshComponent* meshComponent = nullptr;
	};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void generateIslands();
	void generateCorners();

	int32 GetIslandIndex(int32 x, int32 y);
	uint8 ComputeCornerMask(int32 cornerX, int32 cornerY);

	void ResolveCorner(uint8 mask, ECornerType& outType, int32& outRotation);

	void DebugViewGrid();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 gridSize = 10; // n of tiles in NxN grid
	UPROPERTY(EditAnywhere)
	float tileSize = 100.f; // size of each tile in cm

	TArray<Island*> islands;
	TArray<Corner*> corners;

	UPROPERTY(EditAnywhere)
	TMap<ECornerType, UStaticMesh*> cornerMeshes;

	UFUNCTION(BlueprintCallable)
	FIntPoint HighlightTile(FVector location);

	UFUNCTION(BlueprintCallable)
	void PlaceIsland(FVector location);

	int32 GetIslandIndexFromLocation(FIntPoint location);

	void updateCorner(int32 cornerX, int32 cornerY);
};
