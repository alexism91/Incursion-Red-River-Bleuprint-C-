#pragma once
#include "CoreMinimal.h"
#include "PCGParsedAttributeFunction.generated.h"

USTRUCT(BlueprintType)
struct FPCGParsedAttributeFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PinLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchBeginning;
    
    PCG_API FPCGParsedAttributeFunction();
};

