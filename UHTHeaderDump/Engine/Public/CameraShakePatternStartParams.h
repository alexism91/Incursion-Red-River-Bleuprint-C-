#pragma once
#include "CoreMinimal.h"
#include "CameraShakePatternStartParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakePatternStartParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationOverride;
    
    ENGINE_API FCameraShakePatternStartParams();
};

