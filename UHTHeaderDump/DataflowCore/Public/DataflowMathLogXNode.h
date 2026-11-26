#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathLogXNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathLogXNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes base;
    
    DATAFLOWCORE_API FDataflowMathLogXNode();
};

