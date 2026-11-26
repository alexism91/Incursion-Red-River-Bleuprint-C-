#include "GameplayCueNotify_DecalInfo.h"

FGameplayCueNotify_DecalInfo::FGameplayCueNotify_DecalInfo() {
    this->DecalMaterial = NULL;
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bOverrideFadeOut = false;
    this->FadeOutStartDelay = 0.00f;
    this->FadeOutDuration = 0.00f;
}

