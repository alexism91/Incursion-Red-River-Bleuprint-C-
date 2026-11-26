#pragma once
#include "CoreMinimal.h"
#include "OdinChannelMask.h"
#include "OdinSetChannelMasks.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinSetChannelMasks {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, FOdinChannelMask> masks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reset;
    
    FOdinSetChannelMasks();
};

