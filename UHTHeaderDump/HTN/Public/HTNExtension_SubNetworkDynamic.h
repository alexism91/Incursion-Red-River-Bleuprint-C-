#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "HTNExtension.h"
#include "HTNExtension_SubNetworkDynamic.generated.h"

class UHTN;

UCLASS(Blueprintable)
class HTN_API UHTNExtension_SubNetworkDynamic : public UHTNExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UHTN*> GameplayTagToDynamicHTN;
    
public:
    UHTNExtension_SubNetworkDynamic();

    UFUNCTION(BlueprintCallable)
    bool SetDynamicHTN(FGameplayTag InjectTag, UHTN* HTN, bool bForceReplanIfChangedNodesInCurrentPlan, bool bForceReplanIfChangedDuringPlanning, bool bForceAbortCurrentPlanIfForcingReplan);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicHTNs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTN* GetDynamicHTN(FGameplayTag InjectTag) const;
    
};

