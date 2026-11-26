#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowUObjectConvertibleTypes.h"
#include "ConvertUObjectConvertibleTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertUObjectConvertibleTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowUObjectConvertibleTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowUObjectConvertibleTypes Out;
    
public:
    DATAFLOWCORE_API FConvertUObjectConvertibleTypesDataflowNode();
};

