#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ChaosVDDataChannelState.h"
#include "ChaosVDFullSessionInfoResponseMessage.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDFullSessionInfoResponseMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDDataChannelState> DataChannelsStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecording;
    
    CHAOSSOLVERENGINE_API FChaosVDFullSessionInfoResponseMessage();
};

