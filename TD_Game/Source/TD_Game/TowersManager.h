// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridManager.h"
#include "Tower.h"
#include "TowersManager.generated.h"

USTRUCT(BlueprintType)
struct FTowerData
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class ATower> TowerClass;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	UTexture2D* icon;
};

UCLASS()
class TD_GAME_API ATowersManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATowersManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	AGridManager* gridManager;

	UPROPERTY(EditAnywhere)
	UStaticMesh* GhostTowerMeshAsset;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* GhostTowerMesh;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* ValidMaterial;
	UPROPERTY(EditAnywhere)
	UMaterialInterface* InvalidMaterial;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<ATower*> towers;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FTowerData> towersDeck;

	int32 selectedTowerIndex;

	UFUNCTION(BlueprintCallable)
	void selectTower(int32 towerIndex);

	bool getIsTowerAllowed(FVector location);

	UFUNCTION(BlueprintCallable)
	void placeTower(FVector location);


	UFUNCTION(BlueprintCallable)
	FIntPoint showGhostTower(FVector location);
};
