#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathAddNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathAddNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathAddNode();
};

