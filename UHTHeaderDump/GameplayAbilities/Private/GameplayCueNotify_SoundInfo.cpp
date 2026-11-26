#include "GameplayCueNotify_SoundInfo.h"

FGameplayCueNotify_SoundInfo::FGameplayCueNotify_SoundInfo() {
    this->Sound = NULL;
    this->SoundCue = NULL;
    this->LoopingFadeOutDuration = 0.00f;
    this->LoopingFadeVolumeLevel = 0.00f;
    this->bOverrideSpawnCondition = false;
    this->bOverridePlacementInfo = false;
    this->bUseSoundParameterInterface = false;
}

