#pragma once
#include "CoreMinimal.h"
#include "EPropertyBindingPropertyAccessType.h"
#include "PropertyBindingIndex16.h"
#include "PropertyBindingPropertyIndirection.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FPropertyBindingPropertyIndirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingIndex16 ArrayIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingIndex16 NextIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropertyBindingPropertyAccessType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* InstanceStruct;
    
    PROPERTYBINDINGUTILS_API FPropertyBindingPropertyIndirection();
};

