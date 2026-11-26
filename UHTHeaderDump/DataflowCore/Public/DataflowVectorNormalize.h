#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorNormalize.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorNormalize : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes Normalized;
    
public:
    DATAFLOWCORE_API FDataflowVectorNormalize();
};

