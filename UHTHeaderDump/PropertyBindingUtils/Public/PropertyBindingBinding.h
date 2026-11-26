#pragma once
#include "CoreMinimal.h"
#include "PropertyBindingPath.h"
#include "PropertyBindingBinding.generated.h"

USTRUCT(BlueprintType)
struct FPropertyBindingBinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingPath SourcePropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingPath TargetPropertyPath;
    
public:
    PROPERTYBINDINGUTILS_API FPropertyBindingBinding();
};

