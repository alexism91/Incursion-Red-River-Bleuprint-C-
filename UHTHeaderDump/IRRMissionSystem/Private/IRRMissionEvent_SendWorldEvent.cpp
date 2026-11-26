#include "IRRMissionEvent_SendWorldEvent.h"
#include "Net/UnrealNetwork.h"

UIRRMissionEvent_SendWorldEvent::UIRRMissionEvent_SendWorldEvent() {
}

void UIRRMissionEvent_SendWorldEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionEvent_SendWorldEvent, MessageTag);
    DOREPLIFETIME(UIRRMissionEvent_SendWorldEvent, Payload);
}


