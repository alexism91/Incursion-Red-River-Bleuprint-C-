#include "IRRMissionEvent_SendMissionEvent.h"
#include "Net/UnrealNetwork.h"

UIRRMissionEvent_SendMissionEvent::UIRRMissionEvent_SendMissionEvent() {
    this->TargetData = NULL;
}

void UIRRMissionEvent_SendMissionEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionEvent_SendMissionEvent, MessageTag);
    DOREPLIFETIME(UIRRMissionEvent_SendMissionEvent, TargetData);
    DOREPLIFETIME(UIRRMissionEvent_SendMissionEvent, Payload);
}


