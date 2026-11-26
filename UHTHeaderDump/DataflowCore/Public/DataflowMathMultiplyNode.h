#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathMultiplyNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathMultiplyNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathMultiplyNode();
};

