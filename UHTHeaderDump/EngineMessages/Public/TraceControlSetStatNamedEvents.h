#pragma once
#include "CoreMinimal.h"
#include "TraceControlSetStatNamedEvents.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlSetStatNamedEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ENGINEMESSAGES_API FTraceControlSetStatNamedEvents();
};

