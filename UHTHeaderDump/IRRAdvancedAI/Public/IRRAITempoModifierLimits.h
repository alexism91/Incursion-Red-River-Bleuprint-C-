#pragma once
#include "CoreMinimal.h"
#include "IRRAITempoModifierLimits.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAITempoModifierLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostCoverActionDelayMax;
    
    FIRRAITempoModifierLimits();
};

