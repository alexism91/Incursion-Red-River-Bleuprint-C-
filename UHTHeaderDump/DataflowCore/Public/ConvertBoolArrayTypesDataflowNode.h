#pragma once
#include "CoreMinimal.h"
#include "DataflowBoolArrayTypes.h"
#include "DataflowNode.h"
#include "ConvertBoolArrayTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertBoolArrayTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowBoolArrayTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowBoolArrayTypes Out;
    
public:
    DATAFLOWCORE_API FConvertBoolArrayTypesDataflowNode();
};

