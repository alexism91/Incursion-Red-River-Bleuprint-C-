#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathOneMinusNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathOneMinusNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathOneMinusNode();
};

