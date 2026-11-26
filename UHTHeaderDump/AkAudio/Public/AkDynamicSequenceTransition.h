#pragma once
#include "CoreMinimal.h"
#include "EAkCurveInterpolation.h"
#include "AkDynamicSequenceTransition.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkDynamicSequenceTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionDurationMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCurveInterpolation FadeCurve;
    
    FAkDynamicSequenceTransition();
};

