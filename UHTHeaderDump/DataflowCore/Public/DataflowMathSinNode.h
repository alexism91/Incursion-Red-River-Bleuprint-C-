#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathSinNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathSinNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathSinNode();
};

