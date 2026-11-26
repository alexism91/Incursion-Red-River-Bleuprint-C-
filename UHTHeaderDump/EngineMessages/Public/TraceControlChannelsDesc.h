#pragma once
#include "CoreMinimal.h"
#include "TraceControlChannelsDesc.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlChannelsDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Channels;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Descriptions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ReadOnlyIds;
    
    ENGINEMESSAGES_API FTraceControlChannelsDesc();
};

