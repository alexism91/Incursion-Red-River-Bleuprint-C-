#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathTruncNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathTruncNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathTruncNode();
};

