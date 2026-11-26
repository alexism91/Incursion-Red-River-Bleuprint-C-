#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorLengthNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorLengthNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Length;
    
public:
    DATAFLOWCORE_API FDataflowVectorLengthNode();
};

