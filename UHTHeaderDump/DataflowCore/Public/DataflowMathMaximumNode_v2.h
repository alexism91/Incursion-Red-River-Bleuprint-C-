#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathMaximumNode_v2.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathMaximumNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowNumericTypes> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Result;
    
public:
    DATAFLOWCORE_API FDataflowMathMaximumNode_v2();
};

