#pragma once
#include "CoreMinimal.h"
#include "EPropertyBindingPropertyAccessType.h"
#include "PropertyBindingPathSegment.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FPropertyBindingPathSegment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* InstanceStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropertyBindingPropertyAccessType InstancedStructAccessType;
    
public:
    PROPERTYBINDINGUTILS_API FPropertyBindingPathSegment();
};

