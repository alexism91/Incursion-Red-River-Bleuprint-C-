#include "LootModifierComponent.h"

ULootModifierComponent::ULootModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
}

bool ULootModifierComponent::IsEnabled() const {
    return false;
}

TArray<ULootContextModifier*> ULootModifierComponent::GetModifiersAsArray() const {
    return TArray<ULootContextModifier*>();
}

bool ULootModifierComponent::ContainsWorldLocation(const FVector& WorldLocation) const {
    return false;
}


