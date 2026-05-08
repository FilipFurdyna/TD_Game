#include "EnemyController.h"
#include "Enemy.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"

void AEnemyController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    Super::OnMoveCompleted(RequestID, Result);

    AEnemy* Enemy = Cast<AEnemy>(GetPawn());
    if (!Enemy) return;

    if (Result.IsSuccess())
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemy reached goal via AI Move"));

        Enemy->ReachedGoal();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemy failed to reach goal"));
    }
}