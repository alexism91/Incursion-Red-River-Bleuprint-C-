#pragma once
#include "CoreMinimal.h"
#include "DataflowMathOneInputOperatorNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathReciprocalNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathReciprocalNode : public FDataflowMathOneInputOperatorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Fallback;
    
    DATAFLOWCORE_API FDataflowMathReciprocalNode();
};

