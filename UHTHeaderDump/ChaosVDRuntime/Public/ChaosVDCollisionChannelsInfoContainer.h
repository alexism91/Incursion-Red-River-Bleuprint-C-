#pragma once
#include "CoreMinimal.h"
#include "ChaosVDCollisionChannelInfo.h"
#include "ChaosVDCollisionChannelsInfoContainer.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCollisionChannelsInfoContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDCollisionChannelInfo CustomChannelsNames[32];
    
    CHAOSVDRUNTIME_API FChaosVDCollisionChannelsInfoContainer();
};

