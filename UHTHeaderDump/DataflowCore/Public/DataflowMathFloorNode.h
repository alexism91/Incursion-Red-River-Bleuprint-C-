#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathFloorNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathFloorNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathFloorNode();
};

