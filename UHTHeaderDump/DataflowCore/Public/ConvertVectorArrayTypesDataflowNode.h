#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowVectorArrayTypes.h"
#include "ConvertVectorArrayTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertVectorArrayTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorArrayTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorArrayTypes Out;
    
public:
    DATAFLOWCORE_API FConvertVectorArrayTypesDataflowNode();
};

