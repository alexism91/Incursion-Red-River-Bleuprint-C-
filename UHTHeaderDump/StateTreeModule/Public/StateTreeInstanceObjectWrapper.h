#pragma once
#include "CoreMinimal.h"
#include "StateTreeInstanceObjectWrapper.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FStateTreeInstanceObjectWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InstanceObject;
    
    STATETREEMODULE_API FStateTreeInstanceObjectWrapper();
};

