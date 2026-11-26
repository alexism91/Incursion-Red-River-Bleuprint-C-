#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathArcSinNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathArcSinNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathArcSinNode();
};

