// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"


// Sets default values
ATower::ATower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	RangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("RangeSphere"));
	RangeSphere->SetupAttachment(RootComponent);
	RangeSphere->SetSphereRadius(Range);

	RangeSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	RangeSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	RangeSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	RangeSphere->OnComponentBeginOverlap.AddDynamic(this, &ATower::OnEnemyEnterRange);
	RangeSphere->OnComponentEndOverlap.AddDynamic(this, &ATower::OnEnemyExitRange);

}

// Called when the game starts or when spawned
void ATower::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(FireRateTimer, this, &ATower::Fire, FireRate, true);
	
}

// Called every frame
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateTarget();
}



void ATower::Fire()
{
	if (!IsValid(CurrentTarget))
		return;

	FVector SpawnLocation = GetActorLocation() + FVector(0, 0, 50); // Adjust as needed
	FRotator SpawnRotation = GetActorRotation();

	AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);

	if(Projectile)
	{
		Projectile->InitProjectile(CurrentTarget, baseDamage);
		
	}


}

void ATower::UpdateTarget()
{
	// Remove invalid enemies
	EnemiesInRange.RemoveAll([](AEnemy* Enemy)
		{
			return !IsValid(Enemy);
		});

	if (EnemiesInRange.Num() <= 0)
	{
		CurrentTarget = nullptr;
		return;
	}

	// Taget First:
	CurrentTarget = EnemiesInRange[0];
}

void ATower::OnEnemyEnterRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AEnemy* Enemy = Cast<AEnemy>(OtherActor);

	if (Enemy)
	{
		EnemiesInRange.AddUnique(Enemy);
	}
}

void ATower::OnEnemyExitRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AEnemy* Enemy = Cast<AEnemy>(OtherActor);

	if (Enemy)
	{
		EnemiesInRange.Remove(Enemy);

		if (Enemy == CurrentTarget)
		{
			CurrentTarget = nullptr;
		}
	}
}

TArray<AEnemy*> ATower::getEnemies()
{
	return EnemiesInRange;
}

