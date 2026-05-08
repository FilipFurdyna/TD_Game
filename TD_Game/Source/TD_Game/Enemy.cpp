// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerBase.h"
#include "EnemyController.h"
// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AEnemyController::StaticClass();

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	currentHealth = maxHealth;

	GetCharacterMovement()->MaxWalkSpeed = movingSpeed;

	GoalActor = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerBase::StaticClass());
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::takeDamage(float DamageAmount)
{
	currentHealth -= DamageAmount;
	if (currentHealth <= 0)
	{
		Die();
	}
}

void AEnemy::Die()
{
	Destroy();
}

void AEnemy::ReachedGoal()
{
	//Reduce Lives

	//Destroy Enemy
	Die();
}

void AEnemy::MoveToGoal()
{
	if (!GoalActor) return;

	AAIController* AICon = Cast<AAIController>(GetController());
	if (!AICon) return;

	AICon->MoveToActor(GoalActor, 50.0f);
}



