#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "EContainerType.h"
#include "InventoryContainerSettings.generated.h"

class UInventorySupportedItems;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UInventoryContainerSettings : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInventorySupportedItems*> SupportedItems;
    
    UInventoryContainerSettings();

    UFUNCTION(BlueprintCallable)
    FVector2D GetTierContainerSize(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetSupportedItems();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxEquipCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSlotRotated();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasPotentialNestedVitalParts();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetGunsmithOffset();
    
    UFUNCTION(BlueprintCallable)
    bool GetForceAttachment();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetEquipToSlotSize();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDefaultTier();
    
    UFUNCTION(BlueprintCallable)
    EContainerType GetContainerType();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetContainerSize();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetChildSupportedItems();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetAttachmentSpawnFilter();
    
    UFUNCTION(BlueprintCallable)
    float GetAttachmentSpawnChance();
    
    UFUNCTION(BlueprintCallable)
    FName GetAttachmentSocket(FGameplayTag AttachToItemTag);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetAttachmentPosition();
    
    UFUNCTION(BlueprintCallable)
    void FindColumnsAndRows(int32& Cols, int32& Rows);
    
};

