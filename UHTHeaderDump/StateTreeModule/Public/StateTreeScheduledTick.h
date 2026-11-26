#pragma once
#include "CoreMinimal.h"
#include "StateTreeScheduledTick.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeScheduledTick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextDeltaTime;
    
public:
    STATETREEMODULE_API FStateTreeScheduledTick();
};

