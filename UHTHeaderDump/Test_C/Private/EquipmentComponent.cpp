#include "EquipmentComponent.h"
#include "Net/UnrealNetwork.h"

UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceSwap = false;
    this->SpawnedInteractionItemActor = NULL;
    this->Character = NULL;
    this->InventoryComponent = NULL;
    this->SwapMontage = NULL;
}

void UEquipmentComponent::UpdateEquippedItem(FEquipmentData NewEquippedItem) {
}

void UEquipmentComponent::UpdateEquipmentSlotItemVisibility(FContainerItem Item, bool bNewHidden, bool bHideMesh) {
}

void UEquipmentComponent::UpdatedEquipment(FContainerItem Item, FGameplayTag Slot, bool bEquipped) {
}

void UEquipmentComponent::TryUnEquipProvisionalItemFromSlot(FGameplayTag Slot) {
}

bool UEquipmentComponent::TryUnEquipItem() {
    return false;
}

void UEquipmentComponent::TryUnEquipInteractionItem() {
}

bool UEquipmentComponent::TrySetInteractionItem(FContainerItem Item) {
    return false;
}

bool UEquipmentComponent::TryEquipProvisionalItemToSlot(FContainerItem Item, FGameplayTag Slot) {
    return false;
}

bool UEquipmentComponent::TryEquipItem(FEquipmentData NewEquippedItem) {
    return false;
}

bool UEquipmentComponent::TryEquipInteractionItem(FContainerItem Item) {
    return false;
}

void UEquipmentComponent::SwitchPerspective(bool bFirstPerson) {
}

void UEquipmentComponent::SpawnInteractionItem(FIRRUsageItemInfo ItemInfo) {
}

void UEquipmentComponent::SetEquippedItemHiddenInGame(bool bNewHidden) {
}

void UEquipmentComponent::SetEquippedActorsHiddenInGame(bool bNewHidden) {
}

void UEquipmentComponent::RequestUnEquipProvisionalItem_Implementation(FContainerItem Item, FGameplayTag Slot) {
}

void UEquipmentComponent::RequestUnEquipInteractionItem_Implementation() {
}

void UEquipmentComponent::RequestEquipProvisionalItemToSlot_Implementation(FContainerItem Item, FGameplayTag Slot) {
}

void UEquipmentComponent::RequestEquipInteractionItem_Implementation(FContainerItem Item) {
}

void UEquipmentComponent::ReleaseHandsLock(UObject* Holder) {
}

void UEquipmentComponent::OnUnEquipped(FGameplayTag Slot) {
}

void UEquipmentComponent::OnRep_EquippedItem() {
}

void UEquipmentComponent::OnRep_EquipmentData() {
}

void UEquipmentComponent::OnHolsterMontageInterrupted(FName NotifyName) {
}

void UEquipmentComponent::OnHolsterMontageCompleted(FName NotifyName) {
}

void UEquipmentComponent::OnFallbackItemUpdated(FPickUpContainerItem PickUpContainerItem) {
}

void UEquipmentComponent::OnEquipped(FContainerItem Item, FGameplayTag Slot) {
}

void UEquipmentComponent::OnEquipmentDataInitialized() {
}

void UEquipmentComponent::OnDropped(FContainerItem Item) {
}

void UEquipmentComponent::OnDrawMontageEnded(FName NotifyName) {
}

void UEquipmentComponent::MarkHeldItemSpent() {
}

void UEquipmentComponent::K2_UnEquipSlot(bool bSkipAnimation) {
}

int32 UEquipmentComponent::K2_RequestSwap(FGameplayTag Slot, bool bSkipHolsterAnimation) {
    return 0;
}

int32 UEquipmentComponent::K2_RequestHolster(bool bSkipAnimation) {
    return 0;
}






void UEquipmentComponent::K2_EquipSlot(FGameplayTag Slot) {
}

bool UEquipmentComponent::IsSwapQueued(bool bIncludeAutomatic) const {
    return false;
}

bool UEquipmentComponent::IsSwapping() const {
    return false;
}

bool UEquipmentComponent::IsHandsLocked() const {
    return false;
}

FGameplayTag UEquipmentComponent::GetSwapTargetSlot() const {
    return FGameplayTag{};
}

EIRRSwapPhase UEquipmentComponent::GetSwapPhase() const {
    return EIRRSwapPhase::Idle;
}

FGameplayTag UEquipmentComponent::GetLastHeldSlot() const {
    return FGameplayTag{};
}

FGameplayTag UEquipmentComponent::GetIntendedSlot() const {
    return FGameplayTag{};
}

FGameplayTag UEquipmentComponent::GetEquippedSlot() {
    return FGameplayTag{};
}

FContainerItem UEquipmentComponent::GetEquippedItem() {
    return FContainerItem{};
}

FEquipmentSlot UEquipmentComponent::GetEquipmentSlot(FGameplayTag Slot) {
    return FEquipmentSlot{};
}

FEquipmentData UEquipmentComponent::GetEquipmentData(FGameplayTag Slot) {
    return FEquipmentData{};
}

void UEquipmentComponent::DestroyInteractionItem() {
}

bool UEquipmentComponent::CanSwapToSlot(FGameplayTag Slot) {
    return false;
}

void UEquipmentComponent::AcquireHandsLock(UObject* Holder) {
}

void UEquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEquipmentComponent, RepEquipmentData);
    DOREPLIFETIME(UEquipmentComponent, DefaultEquipmentData);
    DOREPLIFETIME(UEquipmentComponent, RepEquippedItem);
    DOREPLIFETIME(UEquipmentComponent, ProvisionalItems);
    DOREPLIFETIME(UEquipmentComponent, InteractionItem);
}


