#include "MassProcessor.h"

UMassProcessor::UMassProcessor() {
    this->ProcessingPhase = EMassProcessingPhase::PrePhysics;
    this->ExecutionFlags = 3;
    this->bAutoRegisterWithProcessingPhases = true;
    this->bRequiresGameThreadExecution = false;
    this->ActivationState = EActivationState::Active;
    this->ExecutionPriority = 0;
}


