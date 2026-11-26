#include "LootGenerationFunctionLibrary.h"

ULootGenerationFunctionLibrary::ULootGenerationFunctionLibrary() {
}

bool ULootGenerationFunctionLibrary::ValidateLootSettings(ULootGenerationSettings* Settings) {
    return false;
}

bool ULootGenerationFunctionLibrary::ValidateItemAgainstConditions(UIRRItemDefinition* ItemDefinition, const FIRRVendorDefaultItem& VendorItem, const TArray<ULootCondition*>& Conditions, const FGameplayTagContainer& AlreadyAddedItems) {
    return false;
}

FString ULootGenerationFunctionLibrary::RollPresetPreview(UIRRItemsPreset* Preset, int32 Rolls, const UObject* WorldContextObject, FVector WorldLocation) {
    return TEXT("");
}

TArray<ULootCondition*> ULootGenerationFunctionLibrary::MergeLootConditions(const TArray<ULootCondition*>& BaseConditions, const TArray<ULootCondition*>& AdditionalConditions, bool bOverrideMode) {
    return TArray<ULootCondition*>();
}

void ULootGenerationFunctionLibrary::LogLootGenerationDebugInfo(const FString& DebugMessage, int32 VerbosityLevel) {
}

void ULootGenerationFunctionLibrary::InvalidateVendorLootCache() {
}

FGameplayTag ULootGenerationFunctionLibrary::GetWorldTimeNightTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetWorldTimeDayTag() {
    return FGameplayTag{};
}

TArray<FIRRVendorDefaultItem> ULootGenerationFunctionLibrary::GetValidItemsForSpawning(ULootGenerationSettings* LootSettings, const TArray<ULootCondition*>& Conditions, const FGameplayTagContainer& CompatibleItems, const FGameplayTagContainer& AlreadyAddedItems, FGameplayTag TargetRarityTag, bool bIsAttachment, const FGameplayTagContainer& AllowedItems, const FGameplayTagContainer& ExcludedItems) {
    return TArray<FIRRVendorDefaultItem>();
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootVehicleTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootResidentialTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootMilitaryTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootMedicalTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootIndustrialTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootLooseLootGenericTag() {
    return FGameplayTag{};
}

FString ULootGenerationFunctionLibrary::GetLootGenerationDescription(ULootGenerationSettings* Settings, const TArray<ULootContextModifier*>& WorldModifiers) {
    return TEXT("");
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootContainerSafeTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootContainerMilitaryTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootContainerMedicalTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootContainerJacketTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootContainerCrateTag() {
    return FGameplayTag{};
}

FGameplayTag ULootGenerationFunctionLibrary::GetLootContainerCarTag() {
    return FGameplayTag{};
}

ULootGenerationSettings* ULootGenerationFunctionLibrary::GetDefaultLootGenerationSettings() {
    return NULL;
}

TArray<ULootContextModifier*> ULootGenerationFunctionLibrary::GetApplicableWorldLootModifiersForActor(AActor* Actor, const FGameplayTagContainer& ContainerTags) {
    return TArray<ULootContextModifier*>();
}

TArray<ULootContextModifier*> ULootGenerationFunctionLibrary::GetApplicableWorldLootModifiers(const UObject* WorldContextObject, FVector WorldLocation, const FGameplayTagContainer& ContainerTags) {
    return TArray<ULootContextModifier*>();
}

int32 ULootGenerationFunctionLibrary::GenerateSpatialContainerItems(FDefaultItem& InOutGearItem, ULootGenerationSettings* LootSettings, int32 MinItemsPerGearContainer, int32 MaxItemsPerGearContainer, const TMap<FGameplayTag, float>& SpatialItemSpawnWeights, int32 MaxGenerationAttemptsMultiplier) {
    return 0;
}

bool ULootGenerationFunctionLibrary::GenerateLootForContainer(FDefaultItemsContainer& OutDefaultItemsContainer, ULootGenerationSettings* LootSettings, const TArray<ULootContextModifier*>& WorldModifiers) {
    return false;
}

bool ULootGenerationFunctionLibrary::GenerateLooseLootItemForActor(FDefaultItem& OutItem, ULootGenerationSettings* LootSettings, AActor* Actor, const FGameplayTagContainer& LooseLootTags) {
    return false;
}

TArray<FDefaultAttachment> ULootGenerationFunctionLibrary::GenerateEquipSlotAttachments(UIRRItemDefinition* ParentItemDefinition, ULootGenerationSettings* LootSettings, bool bForceRequiredAttachments, int32 MinAttachmentDepth, int32 MaxAttachmentDepth, int32 ParentIndex, int32 CurrentDepth) {
    return TArray<FDefaultAttachment>();
}

TArray<FDefaultAttachment> ULootGenerationFunctionLibrary::GenerateAttachmentsForItem(UIRRItemDefinition* ParentItemDefinition, ULootGenerationSettings* LootSettings, bool bForceRequiredAttachments, int32 MinAttachmentDepth, int32 MaxAttachmentDepth, int32 ParentIndex, int32 CurrentDepth) {
    return TArray<FDefaultAttachment>();
}

void ULootGenerationFunctionLibrary::ApplyWorldLootModifiers(ULootGenerationSettings*& InOutSettings, const TArray<ULootContextModifier*>& WorldModifiers) {
}


