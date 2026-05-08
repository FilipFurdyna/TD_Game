// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Projectile.h"
#include "Tower.generated.h"

UCLASS()
class TD_GAME_API ATower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;


	UPROPERTY(VisibleAnywhere)
	class USphereComponent* RangeSphere;

	UPROPERTY(EditAnywhere, Category="Combat")
	float Range = 500.f;

	UPROPERTY(EditAnywhere, Category="Combat")
	float FireRate = 1.f;

	UPROPERTY(EditAnywhere, Category="Combat")
	float baseDamage = 10.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<class AProjectile> ProjectileClass;

	//Target
	TArray<AEnemy*> EnemiesInRange;

	AEnemy* CurrentTarget;

	//Timer
	FTimerHandle FireRateTimer;
	

private:
	void Fire();
	
	void UpdateTarget();
	UFUNCTION()
	void OnEnemyEnterRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEnemyExitRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UFUNCTION(BlueprintCallable)
	TArray<AEnemy*> getEnemies();

};
