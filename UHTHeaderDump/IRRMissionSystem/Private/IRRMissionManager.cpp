#include "IRRMissionManager.h"
#include "Net/UnrealNetwork.h"

UIRRMissionManager::UIRRMissionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeaderMissionComponent = NULL;
}

void UIRRMissionManager::UnRegisterWorldEventListener(TScriptInterface<IIRRMissionEventInterface> Listener) {
}

void UIRRMissionManager::UnRegisterMissionEventListener(TScriptInterface<IIRRMissionEventInterface> Listener) {
}

void UIRRMissionManager::UnRegisterMissionComponent_Implementation(UIRRMissionComponent* IRRMissionComponent) {
}

UIRRMissionData* UIRRMissionManager::StartAvailableOperation(UIRRMissionData* Operation, UIRRMissionComponent* ForComponent, bool bShared) {
    return NULL;
}

bool UIRRMissionManager::RemoveAvailableOperation(UIRRMissionData* Operation) {
    return false;
}

void UIRRMissionManager::RegisterWorldEventListener(TScriptInterface<IIRRMissionEventInterface> Listener) {
}

void UIRRMissionManager::RegisterMissionEventListener(TScriptInterface<IIRRMissionEventInterface> Listener) {
}

void UIRRMissionManager::RegisterMissionComponent_Implementation(UIRRMissionComponent* IRRMissionComponent) {
}

void UIRRMissionManager::ProcessMissionSpawnData_Implementation(UIRRMissionData* InMissionData, UIRRSpawnData* InSpawnData, const FIRRMissionWorldBinding& Binding) {
}

void UIRRMissionManager::OnRep_AvailableOperations() {
}

void UIRRMissionManager::InitSpawnData_Implementation(UIRRMissionData* InMissionData) {
}

UIRRMissionData* UIRRMissionManager::FindAvailableOperationByUID(FGuid OperationUID) const {
    return NULL;
}

UIRRMissionData* UIRRMissionManager::AddAvailableOperation(UIRRMissionSetup* MissionSetup) {
    return NULL;
}

void UIRRMissionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionManager, AvailableOperations);
}


