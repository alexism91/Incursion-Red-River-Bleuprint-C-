#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DefaultAttachment.h"
#include "DefaultItem.h"
#include "DefaultItemsContainer.h"
#include "IRRVendorDefaultItem.h"
#include "LootGenerationFunctionLibrary.generated.h"

class AActor;
class UIRRItemDefinition;
class UIRRItemsPreset;
class ULootCondition;
class ULootContextModifier;
class ULootGenerationSettings;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API ULootGenerationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULootGenerationFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ValidateLootSettings(ULootGenerationSettings* Settings);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateItemAgainstConditions(UIRRItemDefinition* ItemDefinition, const FIRRVendorDefaultItem& VendorItem, const TArray<ULootCondition*>& Conditions, const FGameplayTagContainer& AlreadyAddedItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString RollPresetPreview(UIRRItemsPreset* Preset, int32 Rolls, const UObject* WorldContextObject, FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ULootCondition*> MergeLootConditions(const TArray<ULootCondition*>& BaseConditions, const TArray<ULootCondition*>& AdditionalConditions, bool bOverrideMode);
    
    UFUNCTION(BlueprintCallable)
    static void LogLootGenerationDebugInfo(const FString& DebugMessage, int32 VerbosityLevel);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateVendorLootCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetWorldTimeNightTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetWorldTimeDayTag();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIRRVendorDefaultItem> GetValidItemsForSpawning(ULootGenerationSettings* LootSettings, const TArray<ULootCondition*>& Conditions, const FGameplayTagContainer& CompatibleItems, const FGameplayTagContainer& AlreadyAddedItems, FGameplayTag TargetRarityTag, bool bIsAttachment, const FGameplayTagContainer& AllowedItems, const FGameplayTagContainer& ExcludedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootVehicleTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootResidentialTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootMilitaryTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootMedicalTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootIndustrialTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootLooseLootGenericTag();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLootGenerationDescription(ULootGenerationSettings* Settings, const TArray<ULootContextModifier*>& WorldModifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootContainerSafeTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootContainerMilitaryTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootContainerMedicalTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootContainerJacketTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootContainerCrateTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetLootContainerCarTag();
    
    UFUNCTION(BlueprintCallable)
    static ULootGenerationSettings* GetDefaultLootGenerationSettings();
    
    UFUNCTION(BlueprintCallable)
    static TArray<ULootContextModifier*> GetApplicableWorldLootModifiersForActor(AActor* Actor, const FGameplayTagContainer& ContainerTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULootContextModifier*> GetApplicableWorldLootModifiers(const UObject* WorldContextObject, FVector WorldLocation, const FGameplayTagContainer& ContainerTags);
    
    UFUNCTION(BlueprintCallable)
    static int32 GenerateSpatialContainerItems(UPARAM(Ref) FDefaultItem& InOutGearItem, ULootGenerationSettings* LootSettings, int32 MinItemsPerGearContainer, int32 MaxItemsPerGearContainer, const TMap<FGameplayTag, float>& SpatialItemSpawnWeights, int32 MaxGenerationAttemptsMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateLootForContainer(UPARAM(Ref) FDefaultItemsContainer& OutDefaultItemsContainer, ULootGenerationSettings* LootSettings, const TArray<ULootContextModifier*>& WorldModifiers);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateLooseLootItemForActor(FDefaultItem& OutItem, ULootGenerationSettings* LootSettings, AActor* Actor, const FGameplayTagContainer& LooseLootTags);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDefaultAttachment> GenerateEquipSlotAttachments(UIRRItemDefinition* ParentItemDefinition, ULootGenerationSettings* LootSettings, bool bForceRequiredAttachments, int32 MinAttachmentDepth, int32 MaxAttachmentDepth, int32 ParentIndex, int32 CurrentDepth);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDefaultAttachment> GenerateAttachmentsForItem(UIRRItemDefinition* ParentItemDefinition, ULootGenerationSettings* LootSettings, bool bForceRequiredAttachments, int32 MinAttachmentDepth, int32 MaxAttachmentDepth, int32 ParentIndex, int32 CurrentDepth);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWorldLootModifiers(UPARAM(Ref) ULootGenerationSettings*& InOutSettings, const TArray<ULootContextModifier*>& WorldModifiers);
    
};

