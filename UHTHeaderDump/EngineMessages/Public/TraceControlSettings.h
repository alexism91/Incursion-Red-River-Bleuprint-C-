#pragma once
#include "CoreMinimal.h"
#include "TraceChannelPreset.h"
#include "TraceControlSettings.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorkerThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseImportantCache;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TailSizeBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTraceChannelPreset> ChannelPresets;
    
    ENGINEMESSAGES_API FTraceControlSettings();
};

