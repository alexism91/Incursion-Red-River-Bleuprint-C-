#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EHTNNodeSubNetworkDynamicPlanAdjustmentMode.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_SubNetworkDynamic.generated.h"

class UHTN;

UCLASS(Blueprintable)
class HTN_API UHTNNode_SubNetworkDynamic : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* DefaultHTN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTakeHTNFromWorldstateKey: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TakeHTNFromWorldstateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNNodeSubNetworkDynamicPlanAdjustmentMode PlanAdjustmentMode;
    
    UHTNNode_SubNetworkDynamic();

};

