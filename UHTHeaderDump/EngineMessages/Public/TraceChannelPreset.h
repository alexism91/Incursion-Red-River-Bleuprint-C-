#pragma once
#include "CoreMinimal.h"
#include "TraceChannelPreset.generated.h"

USTRUCT(BlueprintType)
struct FTraceChannelPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChannelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadOnly;
    
    ENGINEMESSAGES_API FTraceChannelPreset();
};

