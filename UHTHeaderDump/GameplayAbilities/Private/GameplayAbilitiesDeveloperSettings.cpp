#include "GameplayAbilitiesDeveloperSettings.h"

UGameplayAbilitiesDeveloperSettings::UGameplayAbilitiesDeveloperSettings() {
    this->bUseDebugTargetFromHud = false;
    this->PredictTargetGameplayEffects = true;
    this->ReplicateActivationOwnedTags = true;
    this->bAllowGameplayModEvaluationChannels = false;
    this->DefaultGameplayModEvaluationChannel = EGameplayModEvaluationChannel::Channel0;
    this->MinimalReplicationTagCountBits = 5;
}


