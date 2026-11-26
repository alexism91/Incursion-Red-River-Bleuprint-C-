#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FOptimusDataTypeRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> TypeObject;
    
    OPTIMUSCORE_API FOptimusDataTypeRef();
};

