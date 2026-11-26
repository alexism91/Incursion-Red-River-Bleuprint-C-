#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowTransformArrayTypes.h"
#include "ConvertTransformArrayTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertTransformArrayTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformArrayTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformArrayTypes Out;
    
public:
    DATAFLOWCORE_API FConvertTransformArrayTypesDataflowNode();
};

