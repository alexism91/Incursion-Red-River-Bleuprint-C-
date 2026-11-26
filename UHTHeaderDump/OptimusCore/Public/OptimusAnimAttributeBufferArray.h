#pragma once
#include "CoreMinimal.h"
#include "OptimusAnimAttributeBufferDescription.h"
#include "OptimusAnimAttributeBufferArray.generated.h"

USTRUCT(BlueprintType)
struct FOptimusAnimAttributeBufferArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusAnimAttributeBufferDescription> InnerArray;
    
    OPTIMUSCORE_API FOptimusAnimAttributeBufferArray();
};

