#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BaseStatItem.h"
#include "ItemAppearance.h"
#include "ItemProperties.h"
#include "ItemRandomParams.h"
#include "ItemRelations.h"
#include "Templates/SubclassOf.h"
#include "IRRItemDefinition.generated.h"

class AActor;
class UIRRVendorCondition;
class UInventoryContainerSettings;
class UItemAction;
class UItemContext;
class UObject;
class USimpleGameplayEffect;

UCLASS(Blueprintable)
class TEST_C_API UIRRItemDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAppearance ItemAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemProperties ItemProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseStatItem> ItemStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRandomParams ItemRandomParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRelations ItemRelations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInventoryContainerSettings*> ItemContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemContext*> ItemContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemAction*> ItemEquippedToggles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRVendorCondition*> ItemVendorConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirty;
    
    UIRRItemDefinition();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<FBaseStatItem> GetItemStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<USimpleGameplayEffect*> GetItemGameplayEffectsByTagContainer(bool& bFound, FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable)
    UItemContext* GetItemDefaultContext(bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<UItemContext*> GetItemContexts(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UItemContext* GetItemActionContext(bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool EvaluateVendorConditions(const UObject* WorldContextObject);
    
};

