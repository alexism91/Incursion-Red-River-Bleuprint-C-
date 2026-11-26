#include "GameplayModMagnitudeCalculation.h"

UGameplayModMagnitudeCalculation::UGameplayModMagnitudeCalculation() {
    this->bAllowNonNetAuthorityDependencyRegistration = false;
}

float UGameplayModMagnitudeCalculation::K2_GetCapturedAttributeMagnitude(const FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const {
    return 0.0f;
}

FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetSpecTags(const FGameplayEffectSpec& EffectSpec) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetAggregatedTags(const FGameplayEffectSpec& EffectSpec) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetActorTags(const FGameplayEffectSpec& EffectSpec) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceSpecTags(const FGameplayEffectSpec& EffectSpec) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceAggregatedTags(const FGameplayEffectSpec& EffectSpec) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceActorTags(const FGameplayEffectSpec& EffectSpec) const {
    return FGameplayTagContainer{};
}

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByTag(const FGameplayEffectSpec& EffectSpec, const FGameplayTag& Tag) const {
    return 0.0f;
}

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByName(const FGameplayEffectSpec& EffectSpec, const FName& MagnitudeName) const {
    return 0.0f;
}

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const {
    return 0.0f;
}


