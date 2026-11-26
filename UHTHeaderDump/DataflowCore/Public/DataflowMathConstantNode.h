#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "EDataflowMathConstantsEnum.h"
#include "DataflowMathConstantNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMathConstantNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowMathConstantsEnum Constant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Result;
    
    DATAFLOWCORE_API FDataflowMathConstantNode();
};

