#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathSquareNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathSquareNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathSquareNode();
};

