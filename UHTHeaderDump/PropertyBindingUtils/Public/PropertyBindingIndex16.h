#pragma once
#include "CoreMinimal.h"
#include "PropertyBindingIndex16.generated.h"

USTRUCT(BlueprintType)
struct FPropertyBindingIndex16 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
public:
    PROPERTYBINDINGUTILS_API FPropertyBindingIndex16();
};

