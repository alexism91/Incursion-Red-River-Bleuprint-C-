#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowStringArrayTypes.h"
#include "ConvertStringArrayTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertStringArrayTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringArrayTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringArrayTypes Out;
    
public:
    DATAFLOWCORE_API FConvertStringArrayTypesDataflowNode();
};

