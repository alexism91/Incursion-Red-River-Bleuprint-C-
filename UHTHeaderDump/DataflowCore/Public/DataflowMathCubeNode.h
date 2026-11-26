#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathCubeNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathCubeNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathCubeNode();
};

