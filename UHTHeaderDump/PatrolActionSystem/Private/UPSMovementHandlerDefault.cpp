#include "UPSMovementHandlerDefault.h"

AUPSMovementHandlerDefault::AUPSMovementHandlerDefault(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRotateOnPoint = true;
    this->ActiveGameplayTask = NULL;
}

void AUPSMovementHandlerDefault::OnCharacterRotatedToPoint(AAIController* AIC, UUPSAITask_AIRotateToTarget* FinishedTask) {
}

void AUPSMovementHandlerDefault::OnCharacterReachPoint(ACharacter* Character, UUPSMoveToEnemyPointAction* MoveTask, TEnumAsByte<EPathFollowingResult::Type> Result) {
}


