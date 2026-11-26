#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathMaximumNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathMaximumNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathMaximumNode();
};

