#pragma once
#include "CoreMinimal.h"
#include "TraceControlChannelsStatus.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlChannelsStatus {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> EnabledIds;
    
    ENGINEMESSAGES_API FTraceControlChannelsStatus();
};

