#pragma once
#include "CoreMinimal.h"
#include "ChaosVDDataChannelState.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDDataChannelState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeChannelState;
    
    CHAOSSOLVERENGINE_API FChaosVDDataChannelState();
};

