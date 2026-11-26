#pragma once
#include "CoreMinimal.h"
#include "ChaosVDDataChannelState.h"
#include "ChaosVDChannelStateChangeCommandMessage.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDChannelStateChangeCommandMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDDataChannelState NewState;
    
    CHAOSSOLVERENGINE_API FChaosVDChannelStateChangeCommandMessage();
};

