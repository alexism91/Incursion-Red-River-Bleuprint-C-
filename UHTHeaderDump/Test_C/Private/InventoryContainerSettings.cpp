#include "InventoryContainerSettings.h"

UInventoryContainerSettings::UInventoryContainerSettings() {
}

FVector2D UInventoryContainerSettings::GetTierContainerSize(int32 Tier) {
    return FVector2D{};
}

FGameplayTagContainer UInventoryContainerSettings::GetSupportedItems() {
    return FGameplayTagContainer{};
}

int32 UInventoryContainerSettings::GetMaxEquipCount() {
    return 0;
}

bool UInventoryContainerSettings::GetIsSlotRotated() {
    return false;
}

bool UInventoryContainerSettings::GetHasPotentialNestedVitalParts() {
    return false;
}

FVector2D UInventoryContainerSettings::GetGunsmithOffset() {
    return FVector2D{};
}

bool UInventoryContainerSettings::GetForceAttachment() {
    return false;
}

FVector2D UInventoryContainerSettings::GetEquipToSlotSize() {
    return FVector2D{};
}

int32 UInventoryContainerSettings::GetDefaultTier() {
    return 0;
}

EContainerType UInventoryContainerSettings::GetContainerType() {
    return EContainerType::EquipTo;
}

FVector2D UInventoryContainerSettings::GetContainerSize() {
    return FVector2D{};
}

FGameplayTagContainer UInventoryContainerSettings::GetChildSupportedItems() {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UInventoryContainerSettings::GetAttachmentSpawnFilter() {
    return FGameplayTagContainer{};
}

float UInventoryContainerSettings::GetAttachmentSpawnChance() {
    return 0.0f;
}

FName UInventoryContainerSettings::GetAttachmentSocket(FGameplayTag AttachToItemTag) {
    return NAME_None;
}

FVector2D UInventoryContainerSettings::GetAttachmentPosition() {
    return FVector2D{};
}

void UInventoryContainerSettings::FindColumnsAndRows(int32& Cols, int32& Rows) {
}


