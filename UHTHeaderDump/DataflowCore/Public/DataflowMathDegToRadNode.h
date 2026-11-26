#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathDegToRadNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathDegToRadNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathDegToRadNode();
};

