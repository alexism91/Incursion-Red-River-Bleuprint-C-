#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathArcTanNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathArcTanNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathArcTanNode();
};

