#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathArcCosNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathArcCosNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathArcCosNode();
};

