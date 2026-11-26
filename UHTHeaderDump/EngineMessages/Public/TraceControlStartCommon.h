#pragma once
#include "CoreMinimal.h"
#include "TraceControlStartCommon.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlStartCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Channels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeTail;
    
    ENGINEMESSAGES_API FTraceControlStartCommon();
};

