#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathMinimumNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathMinimumNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathMinimumNode();
};

