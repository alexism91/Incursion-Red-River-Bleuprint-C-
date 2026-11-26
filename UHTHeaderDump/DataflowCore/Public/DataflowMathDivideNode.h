#pragma once
#include "CoreMinimal.h"
#include "DataflowMathTwoInputsOperatorNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowMathDivideNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathDivideNode : public FDataflowMathTwoInputsOperatorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Fallback;
    
    DATAFLOWCORE_API FDataflowMathDivideNode();
};

