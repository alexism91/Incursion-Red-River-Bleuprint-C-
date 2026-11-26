#include "GameplayCueNotify_ForceFeedbackInfo.h"

FGameplayCueNotify_ForceFeedbackInfo::FGameplayCueNotify_ForceFeedbackInfo() {
    this->ForceFeedbackEffect = NULL;
    this->bIsLooping = false;
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bPlayInWorld = false;
    this->WorldIntensity = 0.00f;
    this->WorldAttenuation = NULL;
}

