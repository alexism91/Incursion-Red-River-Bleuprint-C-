#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericArrayTypes.h"
#include "ConvertNumericArrayTypesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertNumericArrayTypesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericArrayTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericArrayTypes Out;
    
public:
    DATAFLOWCORE_API FConvertNumericArrayTypesDataflowNode();
};

