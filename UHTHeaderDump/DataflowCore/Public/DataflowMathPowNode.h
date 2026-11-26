#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathPowNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathPowNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathPowNode();
};

