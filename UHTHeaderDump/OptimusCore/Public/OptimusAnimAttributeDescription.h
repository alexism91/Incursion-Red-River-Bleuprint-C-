#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.h"
#include "OptimusValueContainerStruct.h"
#include "OptimusAnimAttributeDescription.generated.h"

class UOptimusValueContainer;

USTRUCT(BlueprintType)
struct FOptimusAnimAttributeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValueContainerStruct DefaultValueStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HlslId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusValueContainer* DefaultValue;
    
public:
    OPTIMUSCORE_API FOptimusAnimAttributeDescription();
};

