#include "IRRMissionService.h"

UIRRMissionService::UIRRMissionService() {
    this->bIgnoreTargetData = false;
}

bool UIRRMissionService::TryExecuteOnInit_Implementation(UIRRMissionObjective* Objective) {
    return false;
}

bool UIRRMissionService::TryExecute_Implementation(UIRRMissionObjective* Objective, FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Receiver) {
    return false;
}

void UIRRMissionService::Execute_Implementation(UIRRMissionObjective* Objective, FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Instigator) {
}


