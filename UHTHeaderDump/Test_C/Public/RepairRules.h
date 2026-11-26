#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ContainerItem.h"
#include "RepairRules.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API URepairRules : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairMaterialBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> RepairMaterialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CashRepairPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CashRepairCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RepairPenaltyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairPenaltyBaseValue;
    
    URepairRules();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetRepairPenalty(FContainerItem Item, float& OutRepairPenalty, float& OutRepairMaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetRepairMaterials(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EvaluateMaterialRepair(FContainerItem Item, const TMap<FGuid, int32>& SelectedItems, float& OutReplacementValue, float& OutRepairValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateMaterial(FContainerItem Item, FContainerItem Material, int32 Amount, UPARAM(Ref) float& OutReplacementValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EvaluateCashRepair(FContainerItem Item, float& OutRepairValue, float& OutCashValue);
    
};

