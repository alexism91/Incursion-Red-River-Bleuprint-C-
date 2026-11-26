#include "GameplayCueNotify_CameraLensEffectInfo.h"

FGameplayCueNotify_CameraLensEffectInfo::FGameplayCueNotify_CameraLensEffectInfo() {
    this->CameraLensEffect = NULL;
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bPlayInWorld = false;
    this->WorldInnerRadius = 0.00f;
    this->WorldOuterRadius = 0.00f;
}

