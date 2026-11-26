#include "GameplayAbilitySpecConfig.h"

FGameplayAbilitySpecConfig::FGameplayAbilitySpecConfig() {
    this->Ability = NULL;
    this->InputID = 0;
    this->RemovalPolicy = EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately;
}

