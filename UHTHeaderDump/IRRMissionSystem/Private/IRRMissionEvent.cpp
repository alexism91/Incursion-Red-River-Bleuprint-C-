#include "IRRMissionEvent.h"
#include "Net/UnrealNetwork.h"

UIRRMissionEvent::UIRRMissionEvent() {
    this->NetworkExecType = EIRRMissionNetworkExecType::Both;
}

void UIRRMissionEvent::TryExecute(UObject* Owner) {
}

void UIRRMissionEvent::Execute_Implementation(UObject* Owner) {
}

void UIRRMissionEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionEvent, NetworkExecType);
}


