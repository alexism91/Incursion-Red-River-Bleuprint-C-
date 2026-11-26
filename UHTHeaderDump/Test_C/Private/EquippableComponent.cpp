#include "EquippableComponent.h"

UEquippableComponent::UEquippableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquippableDataAsset = NULL;
    this->FWeightMultiplier = NULL;
    this->FErgonomicsMultiplier = NULL;
    this->LocInventoryComp = NULL;
    this->OwningInventoryComp = NULL;
    this->CharacterRef = NULL;
    this->CharacterAnimInstance = NULL;
    this->EquippableAnimInstance = NULL;
}

void UEquippableComponent::UnEquipItem(bool bWasDropped) {
}

void UEquippableComponent::SwitchPerspective(bool bFirstPerson) {
}

void UEquippableComponent::SetupCharacterAnimInstance() {
}

void UEquippableComponent::RequestUpdatePickupItem(FContainerItem NewItem, const FString& Payload) {
}

void UEquippableComponent::OnPotentialItemDropped(FContainerItem DroppedItem) {
}

void UEquippableComponent::OnPickupOwnerUpdated(UInventoryComponent* NewInventoryComp) {
}

void UEquippableComponent::OnPickupItemUpdated(FPickUpContainerItem NewPickupContainerItem) {
}

void UEquippableComponent::OnItemDropped_Implementation() {
}

void UEquippableComponent::HandleSeparateFOV(bool bIsEquipped) {
}

float UEquippableComponent::GetWeightMultiplier() {
    return 0.0f;
}

float UEquippableComponent::GetWeight() {
    return 0.0f;
}

float UEquippableComponent::GetSwayMultiplier() {
    return 0.0f;
}

float UEquippableComponent::GetErgonomicsMultiplier() {
    return 0.0f;
}

float UEquippableComponent::GetErgonomics() {
    return 0.0f;
}

UEquippableDataAsset* UEquippableComponent::GetEquippableDataAsset() {
    return NULL;
}

void UEquippableComponent::GetContainerItemAsRef(FContainerItem& OutContainerItem) {
}

FContainerItem UEquippableComponent::GetContainerItem() const {
    return FContainerItem{};
}

TArray<FContainerItem> UEquippableComponent::GetAttachments(bool bIncludeRoot) {
    return TArray<FContainerItem>();
}

void UEquippableComponent::EquipItem(FGameplayTag Slot, AActor* Owner) {
}


