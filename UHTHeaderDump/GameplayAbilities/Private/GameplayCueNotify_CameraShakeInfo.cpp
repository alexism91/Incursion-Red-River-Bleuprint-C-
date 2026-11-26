#include "GameplayCueNotify_CameraShakeInfo.h"

FGameplayCueNotify_CameraShakeInfo::FGameplayCueNotify_CameraShakeInfo() {
    this->CameraShake = NULL;
    this->ShakeScale = 0.00f;
    this->PlaySpace = EGameplayCueNotify_EffectPlaySpace::WorldSpace;
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bPlayInWorld = false;
    this->WorldInnerRadius = 0.00f;
    this->WorldOuterRadius = 0.00f;
    this->WorldFalloffExponent = 0.00f;
}

