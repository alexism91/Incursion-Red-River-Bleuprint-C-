#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathClampNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathClampNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Max;
    
    DATAFLOWCORE_API FDataflowMathClampNode();
};

