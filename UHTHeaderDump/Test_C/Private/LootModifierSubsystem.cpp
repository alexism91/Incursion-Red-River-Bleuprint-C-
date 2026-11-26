#include "LootModifierSubsystem.h"

ULootModifierSubsystem::ULootModifierSubsystem() {
}

void ULootModifierSubsystem::SetAllLootModifierVolumesHiddenInEditor(bool bHidden) {
}

void ULootModifierSubsystem::RemoveQueryTag(const FGameplayTag Tag) {
}

void ULootModifierSubsystem::RemoveGlobalModifier(ULootContextModifier* Modifier) {
}

TArray<ULootContextModifier*> ULootModifierSubsystem::GetGlobalModifiers() const {
    return TArray<ULootContextModifier*>();
}

void ULootModifierSubsystem::GetApplicableModifiers(const FLootRequestContext& Context, TArray<ULootContextModifier*>& OutModifiers) const {
}

FGameplayTagContainer ULootModifierSubsystem::GetActiveQueryTags() const {
    return FGameplayTagContainer{};
}

void ULootModifierSubsystem::ClearQueryTags() {
}

void ULootModifierSubsystem::ClearGlobalModifiers() {
}

void ULootModifierSubsystem::AddQueryTag(const FGameplayTag Tag) {
}

void ULootModifierSubsystem::AddGlobalModifier(ULootContextModifier* Modifier) {
}


