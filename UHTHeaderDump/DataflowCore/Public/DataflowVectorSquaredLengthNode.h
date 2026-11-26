#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorSquaredLengthNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorSquaredLengthNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes SquaredLength;
    
public:
    DATAFLOWCORE_API FDataflowVectorSquaredLengthNode();
};

