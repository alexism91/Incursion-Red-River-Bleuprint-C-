#pragma once
#include "CoreMinimal.h"
#include "LiveLinkByteArray.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkByteArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Bytes;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkByteArray();
};

