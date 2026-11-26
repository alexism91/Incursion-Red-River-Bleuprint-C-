#pragma once
#include "CoreMinimal.h"
#include "CameraShakePatternStopParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakePatternStopParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediately;
    
    ENGINE_API FCameraShakePatternStopParams();
};

