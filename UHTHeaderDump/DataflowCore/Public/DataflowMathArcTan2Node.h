#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowMathArcTan2Node.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathArcTan2Node : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathArcTan2Node();
};

