#include "IRRSteamAchievement.h"

UIRRSteamAchievement::UIRRSteamAchievement() {
    this->bProgress = false;
    this->MaxProgress = 0;
    this->bShowProgress = false;
}

bool UIRRSteamAchievement::GetEventProgress(FGameplayTag MessageTag, UIRRTargetData* InTargetData, const FIRRMissionEventPayload& Payload, EIRRAchievementProgressMode& OutMode, int32& OutAmount) {
    return false;
}

int32 UIRRSteamAchievement::FindMatchingData(FGameplayTag MessageTag, const UIRRTargetData* InTargetData, const FIRRMissionEventPayload& Payload) const {
    return 0;
}

bool UIRRSteamAchievement::Evaluate_Implementation(FGameplayTag MessageTag, UIRRTargetData* InTargetData, FIRRMissionEventPayload Payload) {
    return false;
}


