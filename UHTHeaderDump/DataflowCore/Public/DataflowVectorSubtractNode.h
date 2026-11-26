#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorSubtractNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorSubtractNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes V;
    
public:
    DATAFLOWCORE_API FDataflowVectorSubtractNode();
};

