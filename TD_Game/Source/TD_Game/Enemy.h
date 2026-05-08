// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Enemy.generated.h"

UCLASS()
class TD_GAME_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float maxHealth = 100.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Stats")
	float currentHealth;

	UPROPERTY(EditAnywhere, Category="Stats")
	float movingSpeed = 15.0f;

	//Damage Handling
	UFUNCTION()
	void takeDamage(float DamageAmount);

	void Die();
	void ReachedGoal();

	//Path Targeting
	UPROPERTY(EditInstanceOnly, Category = "AI")
	AActor* GoalActor;

private:
	
	void MoveToGoal();

};
