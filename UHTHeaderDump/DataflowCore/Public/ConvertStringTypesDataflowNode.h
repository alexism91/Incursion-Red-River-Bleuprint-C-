#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowStringTypes.h"
#include "ConvertStringTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertStringTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringTypes Out;
    
public:
    DATAFLOWCORE_API FConvertStringTypesDataflowNode();
};

