#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorAddNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorAddNode : public FDataflowNode {
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
    DATAFLOWCORE_API FDataflowVectorAddNode();
};

