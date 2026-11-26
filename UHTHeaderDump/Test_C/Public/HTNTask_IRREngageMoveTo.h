#pragma once
#include "CoreMinimal.h"
#include "HTNTask_IRRCombatMoveTo.h"
#include "HTNTask_IRREngageMoveTo.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_IRREngageMoveTo : public UHTNTask_IRRCombatMoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSprintDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopSprintDistanceToTarget;
    
    UHTNTask_IRREngageMoveTo();

};

