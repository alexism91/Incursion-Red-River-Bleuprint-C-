#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathOneInputOperatorNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathOneInputOperatorNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Result;
    
    DATAFLOWCORE_API FDataflowMathOneInputOperatorNode();
};

