#include "UPSAITask_ExecuteEnemyAction.h"

UUPSAITask_ExecuteEnemyAction::UUPSAITask_ExecuteEnemyAction() {
    this->EnemyAction = NULL;
    this->Character = NULL;
}

void UUPSAITask_ExecuteEnemyAction::OnActionFinished(EEnemyActionFinishResult Result) {
}

UUPSAITask_ExecuteEnemyAction* UUPSAITask_ExecuteEnemyAction::ExecuteEnemyAction(UUPSEnemyAction* EnemyActionToActivate, ACharacter* NewCharacter) {
    return NULL;
}

void UUPSAITask_ExecuteEnemyAction::AbortAction() {
}


