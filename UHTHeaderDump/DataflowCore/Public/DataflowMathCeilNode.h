#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowMathCeilNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathCeilNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMathCeilNode();
};

