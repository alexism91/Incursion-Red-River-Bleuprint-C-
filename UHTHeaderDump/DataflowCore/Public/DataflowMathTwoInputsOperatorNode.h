#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathTwoInputsOperatorNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathTwoInputsOperatorNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Result;
    
    DATAFLOWCORE_API FDataflowMathTwoInputsOperatorNode();
};

