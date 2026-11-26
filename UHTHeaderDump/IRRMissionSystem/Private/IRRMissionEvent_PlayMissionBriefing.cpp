#include "IRRMissionEvent_PlayMissionBriefing.h"
#include "Net/UnrealNetwork.h"

UIRRMissionEvent_PlayMissionBriefing::UIRRMissionEvent_PlayMissionBriefing() {
    this->AgentOverride = NULL;
    this->StartDelay = 1.00f;
    this->bOverrideWait = false;
    this->AbilityClassOverride = NULL;
    this->bOnlyOnFirstMissionStart = true;
    this->MaxRetryTime = 10.00f;
}

void UIRRMissionEvent_PlayMissionBriefing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, Briefing);
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, AgentOverride);
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, StartDelay);
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, bOverrideWait);
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, Wait);
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, AbilityClassOverride);
    DOREPLIFETIME(UIRRMissionEvent_PlayMissionBriefing, bOnlyOnFirstMissionStart);
}


