#include "AbilitySystemGlobals.h"

UAbilitySystemGlobals::UAbilitySystemGlobals() {
    this->MinimalReplicationTagCountBits = 0;
    this->bAllowGameplayModEvaluationChannels = false;
    this->DefaultGameplayModEvaluationChannel = EGameplayModEvaluationChannel::Channel0;
    this->GlobalCurveTable = NULL;
    this->GlobalAttributeMetaDataTable = NULL;
    this->GameplayTagResponseTable = NULL;
    this->PredictTargetGameplayEffects = false;
    this->ReplicateActivationOwnedTags = false;
    this->GlobalGameplayCueManager = NULL;
}


