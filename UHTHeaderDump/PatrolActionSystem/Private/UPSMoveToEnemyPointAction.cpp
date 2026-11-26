#include "UPSMoveToEnemyPointAction.h"

UUPSMoveToEnemyPointAction::UUPSMoveToEnemyPointAction() : UAITask(FObjectInitializer::Get()) {
    this->MoveChracter = NULL;
}

UUPSMoveToEnemyPointAction* UUPSMoveToEnemyPointAction::UPSMoveToLocation(ACharacter* Character, FVector Location, FUPSMoveParams& NewMoveParams) {
    return NULL;
}

void UUPSMoveToEnemyPointAction::StopMovement(bool bEndTask) {
}

void UUPSMoveToEnemyPointAction::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}


