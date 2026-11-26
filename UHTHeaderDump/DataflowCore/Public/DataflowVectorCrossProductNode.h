#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorCrossProductNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorCrossProductNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes CrossProduct;
    
public:
    DATAFLOWCORE_API FDataflowVectorCrossProductNode();
};

