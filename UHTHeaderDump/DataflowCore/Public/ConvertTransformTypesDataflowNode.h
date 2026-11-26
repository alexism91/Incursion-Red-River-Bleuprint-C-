#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowTransformTypes.h"
#include "ConvertTransformTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertTransformTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformTypes Out;
    
public:
    DATAFLOWCORE_API FConvertTransformTypesDataflowNode();
};

