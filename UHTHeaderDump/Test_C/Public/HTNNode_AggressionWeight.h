#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNNode_RandomWeight -FallbackName=HTNNode_RandomWeight
#include "HTNNode_AggressionWeight.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNNode_AggressionWeight : public UHTNNode_RandomWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WeightByAggression;
    
    UHTNNode_AggressionWeight();

};

