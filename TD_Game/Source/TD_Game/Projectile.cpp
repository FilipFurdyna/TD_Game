// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Enemy.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = CollisionComponent;

	CollisionComponent->InitSphereRadius(10.0f);
	CollisionComponent->SetCollisionProfileName(TEXT("BlockAll"));

	CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
	Movement->InitialSpeed = 1000.0f;
	Movement->MaxSpeed = 1000.0f;
	Movement->bRotationFollowsVelocity = true;

	InitialLifeSpan = 3.0f;
}

void AProjectile::InitProjectile(AEnemy* TargetEnemy, float InDamage)
{
	Target = TargetEnemy;
	Damage = InDamage;
	if (Target)
	{
		FVector Direction = (Target->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		Movement->Velocity = Direction * Movement->InitialSpeed;
	}
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AEnemy* HitEnemy = Cast<AEnemy>(OtherActor);

	if(HitEnemy)
	{
		HitEnemy->takeDamage(Damage);
	}

	Destroy();
}

