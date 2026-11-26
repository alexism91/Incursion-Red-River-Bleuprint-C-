#include "IRRMissionEvent_AddFactionAndSuccessRateProgress.h"
#include "Net/UnrealNetwork.h"

UIRRMissionEvent_AddFactionAndSuccessRateProgress::UIRRMissionEvent_AddFactionAndSuccessRateProgress() {
}

void UIRRMissionEvent_AddFactionAndSuccessRateProgress::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionEvent_AddFactionAndSuccessRateProgress, LoyaltyProgress);
}


