#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DefaultItemsContainer.h"
#include "LootContainerSlot.h"
#include "IRRItemsPreset.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRItemsPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ContainerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootContainerSlot> ContainerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultItemsContainer> DefaultItemsContainers_LEGACY;
    
    UIRRItemsPreset();

    UFUNCTION(BlueprintCallable)
    void RollPreview();
    
    UFUNCTION(BlueprintCallable)
    void PopulateFromScript();
    
    UFUNCTION(BlueprintCallable)
    void MigrateLegacyContainersToSlots();
    
    UFUNCTION(BlueprintCallable)
    void ExportToScript();
    
};

