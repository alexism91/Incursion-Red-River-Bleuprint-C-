#pragma once
#include "CoreMinimal.h"
#include "TraceControlStartCommon.h"
#include "TraceControlSend.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlSend : public FTraceControlStartCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Host;
    
    ENGINEMESSAGES_API FTraceControlSend();
};

