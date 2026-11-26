#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowVectorTypes.h"
#include "ConvertVectorTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertVectorTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes Out;
    
public:
    DATAFLOWCORE_API FConvertVectorTypesDataflowNode();
};

