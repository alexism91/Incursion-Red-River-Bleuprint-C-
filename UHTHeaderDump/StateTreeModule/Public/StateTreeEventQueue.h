#pragma once
#include "CoreMinimal.h"
#include "StateTreeSharedEvent.h"
#include "StateTreeEventQueue.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEventQueue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeSharedEvent> SharedEvents;
    
public:
    STATETREEMODULE_API FStateTreeEventQueue();
};

