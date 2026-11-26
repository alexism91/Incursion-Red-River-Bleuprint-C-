#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathSquareRootNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathSquareRootNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathSquareRootNode();
};

