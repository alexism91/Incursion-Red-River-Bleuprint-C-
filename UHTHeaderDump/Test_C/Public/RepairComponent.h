#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ContainerItem.h"
#include "RepairComponent.generated.h"

class URepairRules;
class URepairSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API URepairComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URepairSettings* RepairSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairRules* RepairRules;
    
    URepairComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRepairRules(URepairRules* NewRules);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URepairSettings* GetRepairSettings();
    
    UFUNCTION(BlueprintCallable)
    URepairRules* GetRepairRulesByTag(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteMaterialRepair(FContainerItem ToRepairItem, float NewDurability, float NewMaxDurability, const TMap<FGuid, int32>& SelectedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteCashRepair(FContainerItem ToRepairItem, float NewDurability, float NewMaxDurability, int32 RepairCost);
    
};

