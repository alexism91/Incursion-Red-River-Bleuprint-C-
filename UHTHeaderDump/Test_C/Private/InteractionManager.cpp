#include "InteractionManager.h"

UInteractionManager::UInteractionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckInteractionInterval = 0.20f;
    this->MaxDistanceToCenterOfScreen = 40.00f;
    this->TolerateHitDistance = 40.00f;
    this->WidgetPoolSize = 3;
    this->TargetTextClass = NULL;
    this->bTraceComplex = true;
    this->bTraceDebug = false;
    this->SelectedTarget = NULL;
    this->InteractedTarget = NULL;
    this->TargetText = NULL;
}

void UInteractionManager::UpdateInteractionTarget(UInteractionTarget* InteractionTarget, UInteractionOption* InteractionOption, EInteractionState InteractionState) {
}

void UInteractionManager::UpdateInteractionInProgress_Implementation(UInteractionTarget* Target, bool bInProgress) {
}

void UInteractionManager::StopInteraction() {
}

void UInteractionManager::StartInteractionWithTarget_Implementation(UInteractionTarget* Target) {
}

void UInteractionManager::RequestInteraction() {
}

void UInteractionManager::RequestExclusiveInteraction_Implementation(UInteractionTarget* Target, int32 OptionIndex, int32 RequestID) {
}

void UInteractionManager::RemoveTarget(UInteractionTarget* Target) {
}

void UInteractionManager::ReleaseExclusiveInteraction_Implementation(UInteractionTarget* Target) {
}

TArray<UInteractionTarget*> UInteractionManager::GetTargets() {
    return TArray<UInteractionTarget*>();
}

void UInteractionManager::FinishInteractionWithTarget_Implementation(UInteractionTarget* Target, bool bSuccess) {
}

void UInteractionManager::ExecuteInteractionAction_Server_Implementation(UInteractionTarget* Target, UInteractionAction* InteractionAction, bool bDoubleTab) {
}

void UInteractionManager::ExecuteInteractionAction(UInteractionTarget* Target, UInteractionAction* InteractionAction, bool bDoubleTab) {
}

void UInteractionManager::ExclusiveInteractionResult_Implementation(UInteractionTarget* Target, int32 RequestID, bool bGranted) {
}

void UInteractionManager::AddTarget(UInteractionTarget* Target) {
}


