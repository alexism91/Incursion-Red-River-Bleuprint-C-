#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowStringConvertibleTypes.h"
#include "ConvertStringConvertibleTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertStringConvertibleTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringConvertibleTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringConvertibleTypes Out;
    
public:
    DATAFLOWCORE_API FConvertStringConvertibleTypesDataflowNode();
};

