#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSParametrizedQueryExecutionRequest -FallbackName=EQSParametrizedQueryExecutionRequest
#include "EQSParametrizedQueryExecutionRequestHTN.generated.h"

USTRUCT(BlueprintType)
struct HTN_API FEQSParametrizedQueryExecutionRequestHTN : public FEQSParametrizedQueryExecutionRequest {
    GENERATED_BODY()
public:
    FEQSParametrizedQueryExecutionRequestHTN();
};

