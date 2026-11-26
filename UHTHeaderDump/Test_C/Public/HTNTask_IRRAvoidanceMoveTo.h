#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSParametrizedQueryExecutionRequest -FallbackName=EQSParametrizedQueryExecutionRequest
#include "HTNTask_IRRCombatMoveTo.h"
#include "HTNTask_IRRAvoidanceMoveTo.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_IRRAvoidanceMoveTo : public UHTNTask_IRRCombatMoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest RetestQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetestMinInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RedirectMinDistance;
    
    UHTNTask_IRRAvoidanceMoveTo();

};

