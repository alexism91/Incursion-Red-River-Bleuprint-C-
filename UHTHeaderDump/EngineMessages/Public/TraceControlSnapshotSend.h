#pragma once
#include "CoreMinimal.h"
#include "TraceControlSnapshotSend.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlSnapshotSend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Host;
    
    ENGINEMESSAGES_API FTraceControlSnapshotSend();
};

