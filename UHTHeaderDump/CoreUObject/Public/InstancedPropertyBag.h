#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "InstancedPropertyBag.generated.h"

USTRUCT(BlueprintType)
struct FInstancedPropertyBag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Value;
    
public:
    COREUOBJECT_API FInstancedPropertyBag();
};

