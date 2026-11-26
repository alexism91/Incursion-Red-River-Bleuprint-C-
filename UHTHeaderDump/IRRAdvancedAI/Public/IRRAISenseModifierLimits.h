#pragma once
#include "CoreMinimal.h"
#include "IRRAISenseModifierLimits.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAISenseModifierLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionDelayMax;
    
    FIRRAISenseModifierLimits();
};

