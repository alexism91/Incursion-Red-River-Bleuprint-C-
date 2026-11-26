#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathMinimumNode_v2.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathMinimumNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowNumericTypes> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Result;
    
public:
    DATAFLOWCORE_API FDataflowMathMinimumNode_v2();
};

