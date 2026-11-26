#pragma once
#include "CoreMinimal.h"
#include "TraceControlChannelsPing.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlChannelsPing {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KnownChannelCount;
    
    ENGINEMESSAGES_API FTraceControlChannelsPing();
};

