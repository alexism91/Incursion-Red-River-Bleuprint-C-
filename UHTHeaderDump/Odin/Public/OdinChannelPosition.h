#pragma once
#include "CoreMinimal.h"
#include "OdinChannelMask.h"
#include "OdinPosition.h"
#include "OdinChannelPosition.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinChannelPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinChannelMask ChannelMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinPosition Position;
    
    FOdinChannelPosition();
};

