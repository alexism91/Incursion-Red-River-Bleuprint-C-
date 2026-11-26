#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.h"
#include "OptimusValueContainerStruct.h"
#include "OptimusAnimAttributeBufferDescription.generated.h"

USTRUCT(BlueprintType)
struct FOptimusAnimAttributeBufferDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValueContainerStruct DefaultValueStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HlslId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    OPTIMUSCORE_API FOptimusAnimAttributeBufferDescription();
};

