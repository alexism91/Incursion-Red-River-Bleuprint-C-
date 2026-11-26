#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorDotProductNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorDotProductNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes DotProduct;
    
public:
    DATAFLOWCORE_API FDataflowVectorDotProductNode();
};

