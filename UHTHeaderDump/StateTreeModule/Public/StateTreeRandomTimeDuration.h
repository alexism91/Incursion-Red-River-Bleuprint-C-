#pragma once
#include "CoreMinimal.h"
#include "StateTreeRandomTimeDuration.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeRandomTimeDuration {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Duration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 RandomVariance;
    
public:
    STATETREEMODULE_API FStateTreeRandomTimeDuration();
};

