#include "InventoryFunctionLibrary.h"

UInventoryFunctionLibrary::UInventoryFunctionLibrary() {
}

bool UInventoryFunctionLibrary::TryRemoveItemDurability(FContainerItem Item, float& Amount, float& NewDurability) {
    return false;
}

bool UInventoryFunctionLibrary::TryApplyStatEffect(AActor* Target, FContainerItem Item, FGameplayTag StatTypeTag) {
    return false;
}

TArray<FContainerItem> UInventoryFunctionLibrary::SortContainerItemsByName(const TArray<FContainerItem>& Items) {
    return TArray<FContainerItem>();
}

void UInventoryFunctionLibrary::SetStatValueByTag(FContainerItem& Item, FGameplayTag StatTypeTag, float NewValue, float NewMaxValue) {
}

void UInventoryFunctionLibrary::PostInventoryAudioEvent(const UObject* WorldContextObject, UAkAudioEvent* Event) {
}

FDefaultItem UInventoryFunctionLibrary::MakeDefaultItemFromContainerItem(FContainerItem Item, bool bIgnoreChamberAmmo) {
    return FDefaultItem{};
}

bool UInventoryFunctionLibrary::LoadVendorSettingsAsync(const UObject* WorldContextObject) {
    return false;
}

bool UInventoryFunctionLibrary::LoadInventoryUISettingsAsync(const UObject* WorldContextObject) {
    return false;
}

bool UInventoryFunctionLibrary::LoadInventoryImportSettingsAsync(const UObject* WorldContextObject) {
    return false;
}

bool UInventoryFunctionLibrary::IsValidContainerItem(FContainerItem Item) {
    return false;
}

bool UInventoryFunctionLibrary::IsCurrencyItemDefinition(const UIRRItemDefinition* ItemDefinition) {
    return false;
}

bool UInventoryFunctionLibrary::IsCurrencyDefaultItem(const FDefaultItem& Item) {
    return false;
}

bool UInventoryFunctionLibrary::HasContainerItemChanged(FContainerItem Item, FContainerItem NewItem) {
    return false;
}

UWeaponComponent* UInventoryFunctionLibrary::GetWeaponComponentByContainerItem(FContainerItem ContainerItem) {
    return NULL;
}

UWeaponComponent* UInventoryFunctionLibrary::GetWeaponComponentByActor(AActor* Actor) {
    return NULL;
}

FGameplayTag UInventoryFunctionLibrary::GetWeaponClassTag(const UWeaponComponent* InWeaponComp) {
    return FGameplayTag{};
}

UVendorSettings* UInventoryFunctionLibrary::GetVendorSettings(const UObject* WorldContextObject) {
    return NULL;
}

UDataTable* UInventoryFunctionLibrary::GetVendorDataTable(const UObject* WorldContextObject) {
    return NULL;
}

UVendorComponent* UInventoryFunctionLibrary::GetVendorComponent(const UObject* WorldContextObject) {
    return NULL;
}

float UInventoryFunctionLibrary::GetStatValueByTagFast(const FContainerItem& Item, const FGameplayTag& StatTypeTag) {
    return 0.0f;
}

float UInventoryFunctionLibrary::GetStatValueByTag(FContainerItem Item, FGameplayTag StatTypeTag) {
    return 0.0f;
}

float UInventoryFunctionLibrary::GetStatMaxValueByTag(FContainerItem Item, FGameplayTag StatTypeTag) {
    return 0.0f;
}

UStatItemConfig* UInventoryFunctionLibrary::GetStatItemConfigByTag(const UIRRItemDefinition* ItemDefinition, FGameplayTag StatTypeTag) {
    return NULL;
}

UInventoryComponent* UInventoryFunctionLibrary::GetStashInventoryComponent(const UObject* WorldContextObject) {
    return NULL;
}

URepairComponent* UInventoryFunctionLibrary::GetRepairComponent(const UObject* WorldContextObject) {
    return NULL;
}

FGameplayTag UInventoryFunctionLibrary::GetRandomTagWithWeight(TMap<FGameplayTag, float> WeightedTags) {
    return FGameplayTag{};
}

UInventoryComponent* UInventoryFunctionLibrary::GetPlayerInventoryComponent(const UObject* WorldContextObject) {
    return NULL;
}

UAnimInstance* UInventoryFunctionLibrary::GetPlayerAnimInstance(const UObject* WorldContextObject, FName LinkedAnimGraph) {
    return NULL;
}

FContainerItem UInventoryFunctionLibrary::GetPickUpContainerItem(UInventoryComponent* PickUpInventoryComp) {
    return FContainerItem{};
}

UPickUpComponent* UInventoryFunctionLibrary::GetPickUpComponent(AActor* Actor) {
    return NULL;
}

TArray<FContainerItem> UInventoryFunctionLibrary::GetPickUpAttachments(UInventoryComponent* PickUpInventoryComp) {
    return TArray<FContainerItem>();
}

UMeleeComponent* UInventoryFunctionLibrary::GetMeleeComponentByContainerItem(FContainerItem ContainerItem) {
    return NULL;
}

UMeleeComponent* UInventoryFunctionLibrary::GetMeleeComponentByActor(AActor* Actor) {
    return NULL;
}

TArray<FMainContainer> UInventoryFunctionLibrary::GetMainContainersByUID(FGuid MainContainerUID, TArray<FMainContainer> MainContainers) {
    return TArray<FMainContainer>();
}

bool UInventoryFunctionLibrary::GetMagCapacity(FContainerItem ContainerItem, int32& Capacity, int32& MaxCapacity) {
    return false;
}

UItemSnapComponent* UInventoryFunctionLibrary::GetItemSnapComponent(const UObject* WorldContextObject) {
    return NULL;
}

UAkAudioEvent* UInventoryFunctionLibrary::GetItemSearchStartSound(const UObject* WorldContextObject, const FContainerItem& Item) {
    return NULL;
}

UAkAudioEvent* UInventoryFunctionLibrary::GetItemSearchEndSound(const UObject* WorldContextObject, const FContainerItem& Item) {
    return NULL;
}

FVector UInventoryFunctionLibrary::GetItemInspectSpawnLocation(const UObject* WorldContextObject) {
    return FVector{};
}

UAkAudioEvent* UInventoryFunctionLibrary::GetItemDropSound(const UObject* WorldContextObject, const FContainerItem& Item) {
    return NULL;
}

UAkAudioEvent* UInventoryFunctionLibrary::GetItemDragSound(const UObject* WorldContextObject, const FContainerItem& Item) {
    return NULL;
}

UIRRItemDefinition* UInventoryFunctionLibrary::GetItemDefinitionFromTag(FGameplayTag Tag) {
    return NULL;
}

UIRRItemDefinition* UInventoryFunctionLibrary::GetItemDefinitionFromDefaultItem(const FDefaultItem& Item) {
    return NULL;
}

UIRRItemDefinition* UInventoryFunctionLibrary::GetItemDefinitionFromDefaultAttachment(const FDefaultAttachment& Attachment) {
    return NULL;
}

UInventoryEnhancedUISettings* UInventoryFunctionLibrary::GetInventoryUISettings(const UObject* WorldContextObject) {
    return NULL;
}

UInventorySettings* UInventoryFunctionLibrary::GetInventorySettings() {
    return NULL;
}

UInventoryImportSettings* UInventoryFunctionLibrary::GetInventoryImportSettings(const UObject* WorldContextObject) {
    return NULL;
}

UInventoryComponent* UInventoryFunctionLibrary::GetInventoryComponent(AActor* Actor) {
    return NULL;
}

UInventoryComponent* UInventoryFunctionLibrary::GetGunsmithStash(const UObject* WorldContextObject) {
    return NULL;
}

UInventoryComponent_Gunsmith* UInventoryFunctionLibrary::GetGunsmithComponent(const UObject* WorldContextObject) {
    return NULL;
}

AActor* UInventoryFunctionLibrary::GetEquippedWeapon(const AActor* Owner) {
    return NULL;
}

AActor* UInventoryFunctionLibrary::GetEquippedItem(AActor* Owner) {
    return NULL;
}

UEquippableComponent* UInventoryFunctionLibrary::GetEquippableComponentByActor(AActor* Actor) {
    return NULL;
}

UEquipmentComponent* UInventoryFunctionLibrary::GetEquipmentComponent(const AActor* Actor) {
    return NULL;
}

TArray<FContainerItem> UInventoryFunctionLibrary::GetDirectAttachments(FGuid UID, TArray<FContainerItem> Attachments) {
    return TArray<FContainerItem>();
}

TArray<FDefaultAttachment> UInventoryFunctionLibrary::GetDefaultItemAttachments(const FDefaultItem& Item) {
    return TArray<FDefaultAttachment>();
}

FGameplayTag UInventoryFunctionLibrary::GetDamageSourceItem(const FIRRDamageData& DamageData, FContainerItem& OutItem) {
    return FGameplayTag{};
}

FCurrentStatItem UInventoryFunctionLibrary::GetCurrentStatItemByTag(FContainerItem Item, FGameplayTag StatTypeTag) {
    return FCurrentStatItem{};
}

FContainerItem UInventoryFunctionLibrary::GetContainerItemByItemDefinition(UIRRItemDefinition* NewItemDefinition, const UObject* WorldContextObject, FGuid NewItemUID, FGuid NewMotherUID, int32 NewContainerIndex, int32 NewSlotIndex, int32 NewCount, bool IsLoot) {
    return FContainerItem{};
}

FBaseStatItem UInventoryFunctionLibrary::GetBaseStatItemByTag(UIRRItemDefinition* ItemDefinition, FGameplayTag StatTypeTag) {
    return FBaseStatItem{};
}

FGameplayTag UInventoryFunctionLibrary::GetAmmoCaliberTag(const AEBBullet* InBullet) {
    return FGameplayTag{};
}

void UInventoryFunctionLibrary::FindColumnAndRow(int32 SlotIndex, int32 Columns, int32& OutColumn, int32& OutRow) {
}

TArray<FDefaultItem> UInventoryFunctionLibrary::ExpandNonStackableItems(TArray<FDefaultItem> Items) {
    return TArray<FDefaultItem>();
}

FGameplayTagContainer UInventoryFunctionLibrary::ConvertItemsToGameplayTagContainer(const TArray<FContainerItem>& Items) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UInventoryFunctionLibrary::CombineGameplayTagContainers(FGameplayTagContainer BaseContainer, FGameplayTagContainer AddContainer, bool OnlyMatching) {
    return FGameplayTagContainer{};
}

bool UInventoryFunctionLibrary::CanApplyStatEffect(AActor* Target, FContainerItem Item, FGameplayTag StatTypeTag) {
    return false;
}

FDefaultItem UInventoryFunctionLibrary::BakeDefaultItem(FDefaultItem Item) {
    return FDefaultItem{};
}

void UInventoryFunctionLibrary::AddToItemDimensions(FItemDimensions& ParentDimensions, FItemDimensions ChildDimensions, FVector2D SlotAttachmentPosition) {
}

void UInventoryFunctionLibrary::AddItemByRowName(const UObject* WorldContextObject, FName Name, int32 Count) {
}

void UInventoryFunctionLibrary::AddAttachmentsRecursive(TArray<FDefaultAttachment>& Attachments, int32 Index) {
}


