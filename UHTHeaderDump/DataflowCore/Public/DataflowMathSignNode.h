#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathSignNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathSignNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathSignNode();
};

