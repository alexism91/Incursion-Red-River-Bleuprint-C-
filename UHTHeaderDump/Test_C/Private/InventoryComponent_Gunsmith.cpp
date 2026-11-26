#include "InventoryComponent_Gunsmith.h"
#include "EInventoryType.h"

UInventoryComponent_Gunsmith::UInventoryComponent_Gunsmith(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryType = EInventoryType::Container;
    this->bBuyMarkedCoinParts = false;
    this->GunsmithStash = NULL;
    this->GunsmithSaveGame = NULL;
}

void UInventoryComponent_Gunsmith::UpdateGunsmithParams(FGameplayTagContainer CategoryTag, int32 ContentIndex) {
}

bool UInventoryComponent_Gunsmith::SubmitPresetNameOrCode(const FString& NameOrCode, FText& OutMessage) {
    return false;
}

void UInventoryComponent_Gunsmith::RestoreInventory(UInventoryComponent* TargetInventory) {
}

void UInventoryComponent_Gunsmith::ResetPresetItem() {
}

bool UInventoryComponent_Gunsmith::RequestSavePreset(FName PresetName) {
    return false;
}

void UInventoryComponent_Gunsmith::PrepareAssemblePreset(TArray<FIRRVendorStockItem>& ToBuyItems, FString& OutErrorMessage) {
}

FString UInventoryComponent_Gunsmith::MakePresetDataAssetName(const FString& PresetName) {
    return TEXT("");
}

void UInventoryComponent_Gunsmith::LoadSavedPresets() {
}

bool UInventoryComponent_Gunsmith::LoadPresetOntoBench(const FDefaultItem& Preset) {
    return false;
}

bool UInventoryComponent_Gunsmith::LoadPreset(FDefaultItem Preset, FContainerItem Item) {
    return false;
}

FDefaultItem UInventoryComponent_Gunsmith::ItemToPreset(FContainerItem Item) {
    return FDefaultItem{};
}

bool UInventoryComponent_Gunsmith::IsSamePreset(FDefaultItem Preset1, FDefaultItem Preset2) {
    return false;
}

bool UInventoryComponent_Gunsmith::IsPresetShareCode(const FString& Text) {
    return false;
}

bool UInventoryComponent_Gunsmith::InstallAttachment(FGuid MainContainerUID, int32 ContainerIndex, FContainerItem NewAttachment, bool& EqualToInstalled) {
    return false;
}

bool UInventoryComponent_Gunsmith::InitPreset(FContainerItem Item) {
    return false;
}

bool UInventoryComponent_Gunsmith::ImportPresetCode(const FString& Code, FText& OutMessage, FContainerItem& OutPresetItem) {
    return false;
}

bool UInventoryComponent_Gunsmith::ImportAndApplyPresetCode(const FString& Code, FText& OutMessage, FContainerItem& OutPresetItem) {
    return false;
}

bool UInventoryComponent_Gunsmith::HasSavedPreset(FGameplayTag WeaponTag, FName PresetName) const {
    return false;
}

bool UInventoryComponent_Gunsmith::HasPresetChanged() {
    return false;
}

bool UInventoryComponent_Gunsmith::GetToBuyItems(TArray<FIRRVendorStockItem>& ToBuyItems, TArray<FContainerItem>& ToRemoveStashItems, TArray<FContainerItem> StashItems, FString& OutErrorMessage) {
    return false;
}

FContainerItem UInventoryComponent_Gunsmith::GetSavedPresetItem(FName PresetName) {
    return FContainerItem{};
}

FContainerItem UInventoryComponent_Gunsmith::GetPresetItem() {
    return FContainerItem{};
}

FString UInventoryComponent_Gunsmith::GetClipboardText() {
    return TEXT("");
}

FGameplayTag UInventoryComponent_Gunsmith::GetBenchWeaponTag() const {
    return FGameplayTag{};
}

FString UInventoryComponent_Gunsmith::ExportWeaponPresetCode(FGameplayTag WeaponTag, FName PresetName) const {
    return TEXT("");
}

FString UInventoryComponent_Gunsmith::ExportPresetCode(FName PresetName) const {
    return TEXT("");
}

FString UInventoryComponent_Gunsmith::ExportBenchPresetCode(FName PresetName) {
    return TEXT("");
}

bool UInventoryComponent_Gunsmith::DeleteSavePreset(FName PresetName) {
    return false;
}

UIRRItemPreset* UInventoryComponent_Gunsmith::CreatePresetDataAsset(const FString& PresetName, FString& OutErrorMessage) {
    return NULL;
}

bool UInventoryComponent_Gunsmith::CopyPresetCodeToClipboard(FName PresetName) const {
    return false;
}

void UInventoryComponent_Gunsmith::CachePreset() {
}

void UInventoryComponent_Gunsmith::CacheInventory(UInventoryComponent* SourceInventory) {
}

FGuid UInventoryComponent_Gunsmith::AssemblePreset() {
    return FGuid{};
}


