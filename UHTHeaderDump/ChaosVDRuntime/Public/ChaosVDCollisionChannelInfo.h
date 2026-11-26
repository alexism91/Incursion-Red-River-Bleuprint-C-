#pragma once
#include "CoreMinimal.h"
#include "ChaosVDCollisionChannelInfo.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCollisionChannelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTraceType;
    
    CHAOSVDRUNTIME_API FChaosVDCollisionChannelInfo();
};

