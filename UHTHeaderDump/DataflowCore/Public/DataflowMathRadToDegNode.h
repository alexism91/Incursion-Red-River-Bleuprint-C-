#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathRadToDegNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathRadToDegNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathRadToDegNode();
};

