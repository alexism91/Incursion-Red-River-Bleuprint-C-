#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathSubtractNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathSubtractNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathSubtractNode();
};

