#include "LootContextModifier.h"

ULootContextModifier::ULootContextModifier() {
    this->ModifierName = TEXT("Unknown Location");
    this->ContainerSpawnCountMultiplier = 1.00f;
    this->Priority = 0;
    this->bIsInclusive = true;
    this->bEnabled = true;
}

bool ULootContextModifier::MatchesRequestTags(const FGameplayTagContainer& ContainerTags, const FGameplayTagContainer& QueryTags) const {
    return false;
}

FString ULootContextModifier::GetModifierDescription() const {
    return TEXT("");
}


