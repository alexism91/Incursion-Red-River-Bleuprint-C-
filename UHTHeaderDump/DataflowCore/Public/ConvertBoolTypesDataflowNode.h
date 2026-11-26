#pragma once
#include "CoreMinimal.h"
#include "DataflowBoolTypes.h"
#include "DataflowNode.h"
#include "ConvertBoolTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertBoolTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowBoolTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowBoolTypes Out;
    
public:
    DATAFLOWCORE_API FConvertBoolTypesDataflowNode();
};

