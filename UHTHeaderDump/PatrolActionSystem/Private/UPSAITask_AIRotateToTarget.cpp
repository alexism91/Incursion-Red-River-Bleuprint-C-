#include "UPSAITask_AIRotateToTarget.h"

UUPSAITask_AIRotateToTarget::UUPSAITask_AIRotateToTarget() {
    this->AIC = NULL;
    this->Character = NULL;
    this->TargetActor = NULL;
}

UUPSAITask_AIRotateToTarget* UUPSAITask_AIRotateToTarget::RotateAIToTargetRotation(AAIController* AIController, FRotator TargetRotation, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance) {
    return NULL;
}

UUPSAITask_AIRotateToTarget* UUPSAITask_AIRotateToTarget::RotateAIToTargetActor(AAIController* AIController, AActor* RotationTarget, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance) {
    return NULL;
}


