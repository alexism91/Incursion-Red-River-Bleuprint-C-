#include "SimpleGameplayAbility_PlayMissionBriefing.h"

USimpleGameplayAbility_PlayMissionBriefing::USimpleGameplayAbility_PlayMissionBriefing() {
    this->Agent = NULL;
    this->BriefingDelay = 0.50f;
    this->bForcePlay = true;
    this->PostponeQuietTime = 1.50f;
}

void USimpleGameplayAbility_PlayMissionBriefing::HandleOwnedTagsUpdated(FGameplayTagContainer Tags) {
}

APawn* USimpleGameplayAbility_PlayMissionBriefing::GetInstigatorPawn() const {
    return NULL;
}


