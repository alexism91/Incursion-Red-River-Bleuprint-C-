#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeOptionalPlanAdjustmentMode.h"
#include "HTNStandaloneNode.h"
#include "HTNNode_Optional.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_Optional : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNNodeOptionalPlanAdjustmentMode PlanAdjustmentMode;
    
    UHTNNode_Optional();

};

