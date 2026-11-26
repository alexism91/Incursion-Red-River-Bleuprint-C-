#include "FirstPersonCoreComponent.h"

UFirstPersonCoreComponent::UFirstPersonCoreComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFirstPersonCoreComponent::UpdateSettings(FIRRGameplaySettings NewSettings) {
}

void UFirstPersonCoreComponent::RemoveFirstPersonSubObjects(TArray<UFirstPersonCoreSubObject*> ToRemoveSubObjects) {
}

void UFirstPersonCoreComponent::RemoveFirstPersonCameraBlendables(TArray<FWeightedBlendable> ToAddBlendables) {
}

void UFirstPersonCoreComponent::OnEquippableChanged(UEquippableComponent* EquippableComponent) {
}

bool UFirstPersonCoreComponent::IsSettingToggled(FGameplayTag Tag) {
    return false;
}

void UFirstPersonCoreComponent::AddFirstPersonSubObjects(TArray<UFirstPersonCoreSubObject*> ToRemoveSubObjects) {
}

void UFirstPersonCoreComponent::AddFirstPersonCameraBlendables(TArray<FWeightedBlendable> ToAddBlendables) {
}


