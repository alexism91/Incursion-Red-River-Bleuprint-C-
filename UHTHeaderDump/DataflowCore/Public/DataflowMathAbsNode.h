#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathAbsNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathAbsNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathAbsNode();
};

