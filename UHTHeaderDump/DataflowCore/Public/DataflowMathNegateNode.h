#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathNegateNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathNegateNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathNegateNode();
};

