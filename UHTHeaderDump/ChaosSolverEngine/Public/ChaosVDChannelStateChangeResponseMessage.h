#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ChaosVDDataChannelState.h"
#include "ChaosVDChannelStateChangeResponseMessage.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDChannelStateChangeResponseMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDDataChannelState NewState;
    
    CHAOSSOLVERENGINE_API FChaosVDChannelStateChangeResponseMessage();
};

