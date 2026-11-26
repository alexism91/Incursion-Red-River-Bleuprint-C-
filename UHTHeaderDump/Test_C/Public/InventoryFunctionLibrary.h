#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BaseStatItem.h"
#include "ContainerItem.h"
#include "CurrentStatItem.h"
#include "DefaultAttachment.h"
#include "DefaultItem.h"
#include "IRRDamageData.h"
#include "ItemDimensions.h"
#include "MainContainer.h"
#include "InventoryFunctionLibrary.generated.h"

class AActor;
class AEBBullet;
class UAkAudioEvent;
class UAnimInstance;
class UDataTable;
class UEquipmentComponent;
class UEquippableComponent;
class UIRRItemDefinition;
class UInventoryComponent;
class UInventoryComponent_Gunsmith;
class UInventoryEnhancedUISettings;
class UInventoryImportSettings;
class UInventorySettings;
class UItemSnapComponent;
class UMeleeComponent;
class UObject;
class UPickUpComponent;
class URepairComponent;
class UStatItemConfig;
class UVendorComponent;
class UVendorSettings;
class UWeaponComponent;

UCLASS(Blueprintable)
class TEST_C_API UInventoryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInventoryFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TryRemoveItemDurability(FContainerItem Item, UPARAM(Ref) float& Amount, float& NewDurability);
    
    UFUNCTION(BlueprintCallable)
    static bool TryApplyStatEffect(AActor* Target, FContainerItem Item, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FContainerItem> SortContainerItemsByName(const TArray<FContainerItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    static void SetStatValueByTag(UPARAM(Ref) FContainerItem& Item, FGameplayTag StatTypeTag, float NewValue, float NewMaxValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PostInventoryAudioEvent(const UObject* WorldContextObject, UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static FDefaultItem MakeDefaultItemFromContainerItem(FContainerItem Item, bool bIgnoreChamberAmmo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LoadVendorSettingsAsync(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LoadInventoryUISettingsAsync(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LoadInventoryImportSettingsAsync(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidContainerItem(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCurrencyItemDefinition(const UIRRItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCurrencyDefaultItem(const FDefaultItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasContainerItemChanged(FContainerItem Item, FContainerItem NewItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWeaponComponent* GetWeaponComponentByContainerItem(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWeaponComponent* GetWeaponComponentByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetWeaponClassTag(const UWeaponComponent* InWeaponComp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVendorSettings* GetVendorSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetVendorDataTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVendorComponent* GetVendorComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetStatValueByTagFast(const FContainerItem& Item, const FGameplayTag& StatTypeTag);
    
    UFUNCTION(BlueprintCallable)
    static float GetStatValueByTag(FContainerItem Item, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable)
    static float GetStatMaxValueByTag(FContainerItem Item, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable)
    static UStatItemConfig* GetStatItemConfigByTag(const UIRRItemDefinition* ItemDefinition, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInventoryComponent* GetStashInventoryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URepairComponent* GetRepairComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetRandomTagWithWeight(TMap<FGameplayTag, float> WeightedTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInventoryComponent* GetPlayerInventoryComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAnimInstance* GetPlayerAnimInstance(const UObject* WorldContextObject, FName LinkedAnimGraph);
    
    UFUNCTION(BlueprintCallable)
    static FContainerItem GetPickUpContainerItem(UInventoryComponent* PickUpInventoryComp);
    
    UFUNCTION(BlueprintCallable)
    static UPickUpComponent* GetPickUpComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FContainerItem> GetPickUpAttachments(UInventoryComponent* PickUpInventoryComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMeleeComponent* GetMeleeComponentByContainerItem(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMeleeComponent* GetMeleeComponentByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMainContainer> GetMainContainersByUID(FGuid MainContainerUID, TArray<FMainContainer> MainContainers);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMagCapacity(FContainerItem ContainerItem, int32& Capacity, int32& MaxCapacity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UItemSnapComponent* GetItemSnapComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAkAudioEvent* GetItemSearchStartSound(const UObject* WorldContextObject, const FContainerItem& Item);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAkAudioEvent* GetItemSearchEndSound(const UObject* WorldContextObject, const FContainerItem& Item);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetItemInspectSpawnLocation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAkAudioEvent* GetItemDropSound(const UObject* WorldContextObject, const FContainerItem& Item);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAkAudioEvent* GetItemDragSound(const UObject* WorldContextObject, const FContainerItem& Item);
    
    UFUNCTION(BlueprintCallable)
    static UIRRItemDefinition* GetItemDefinitionFromTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static UIRRItemDefinition* GetItemDefinitionFromDefaultItem(const FDefaultItem& Item);
    
    UFUNCTION(BlueprintCallable)
    static UIRRItemDefinition* GetItemDefinitionFromDefaultAttachment(const FDefaultAttachment& Attachment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInventoryEnhancedUISettings* GetInventoryUISettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UInventorySettings* GetInventorySettings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInventoryImportSettings* GetInventoryImportSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UInventoryComponent* GetInventoryComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInventoryComponent* GetGunsmithStash(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInventoryComponent_Gunsmith* GetGunsmithComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetEquippedWeapon(const AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetEquippedItem(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEquippableComponent* GetEquippableComponentByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UEquipmentComponent* GetEquipmentComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FContainerItem> GetDirectAttachments(FGuid UID, TArray<FContainerItem> Attachments);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDefaultAttachment> GetDefaultItemAttachments(const FDefaultItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDamageSourceItem(const FIRRDamageData& DamageData, FContainerItem& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static FCurrentStatItem GetCurrentStatItemByTag(FContainerItem Item, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FContainerItem GetContainerItemByItemDefinition(UIRRItemDefinition* NewItemDefinition, const UObject* WorldContextObject, FGuid NewItemUID, FGuid NewMotherUID, int32 NewContainerIndex, int32 NewSlotIndex, int32 NewCount, bool IsLoot);
    
    UFUNCTION(BlueprintCallable)
    static FBaseStatItem GetBaseStatItemByTag(UIRRItemDefinition* ItemDefinition, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetAmmoCaliberTag(const AEBBullet* InBullet);
    
    UFUNCTION(BlueprintCallable)
    static void FindColumnAndRow(int32 SlotIndex, int32 Columns, int32& OutColumn, int32& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDefaultItem> ExpandNonStackableItems(TArray<FDefaultItem> Items);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer ConvertItemsToGameplayTagContainer(const TArray<FContainerItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer CombineGameplayTagContainers(FGameplayTagContainer BaseContainer, FGameplayTagContainer AddContainer, bool OnlyMatching);
    
    UFUNCTION(BlueprintCallable)
    static bool CanApplyStatEffect(AActor* Target, FContainerItem Item, FGameplayTag StatTypeTag);
    
    UFUNCTION(BlueprintCallable)
    static FDefaultItem BakeDefaultItem(FDefaultItem Item);
    
    UFUNCTION(BlueprintCallable)
    static void AddToItemDimensions(FItemDimensions& ParentDimensions, FItemDimensions ChildDimensions, FVector2D SlotAttachmentPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddItemByRowName(const UObject* WorldContextObject, FName Name, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddAttachmentsRecursive(TArray<FDefaultAttachment>& Attachments, int32 Index);
    
};

