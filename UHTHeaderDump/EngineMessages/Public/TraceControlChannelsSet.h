#pragma once
#include "CoreMinimal.h"
#include "TraceControlChannelsSet.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlChannelsSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ChannelIdsToEnable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ChannelIdsToDisable;
    
    ENGINEMESSAGES_API FTraceControlChannelsSet();
};

