#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathFracNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathFracNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathFracNode();
};

