#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathInverseSquareRootNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathInverseSquareRootNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Fallback;
    
    DATAFLOWCORE_API FDataflowMathInverseSquareRootNode();
};

