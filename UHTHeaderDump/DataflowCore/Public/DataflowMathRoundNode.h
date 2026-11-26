#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathRoundNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathRoundNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathRoundNode();
};

