// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridManager.generated.h"

UENUM(BlueprintType)
enum class ECornerType : uint8
{
	None        UMETA(DisplayName = "None"),
	TopLeft     UMETA(DisplayName = "Top Left"),
	TopRight    UMETA(DisplayName = "Top Right"),
	BottomLeft  UMETA(DisplayName = "Bottom Left"),
	BottomRight UMETA(DisplayName = "Bottom Right")
};

struct Island {
		FIntPoint position;
		int32 cornerIndices[4];
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
	};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void generateIslands();
	void generateCorners();

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
};
