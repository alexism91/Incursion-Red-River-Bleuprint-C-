#pragma once
#include "CoreMinimal.h"
#include "IRRAICombatModifierLimits.h"
#include "IRRAISenseModifierLimits.h"
#include "IRRAITempoModifierLimits.h"
#include "IRRAIStatEffectLimits.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAIStatEffectLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISenseModifierLimits Sense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAICombatModifierLimits Combat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAITempoModifierLimits Tempo;
    
    FIRRAIStatEffectLimits();
};

