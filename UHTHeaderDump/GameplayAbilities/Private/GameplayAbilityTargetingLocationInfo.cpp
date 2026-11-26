#include "GameplayAbilityTargetingLocationInfo.h"

FGameplayAbilityTargetingLocationInfo::FGameplayAbilityTargetingLocationInfo() {
    this->SourceActor = NULL;
    this->SourceComponent = NULL;
    this->SourceAbility = NULL;
    this->LocationType = EGameplayAbilityTargetingLocationType::LiteralTransform;
}

