#pragma once
#include "CoreMinimal.h"
#include "IRRAICombatModifierLimits.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAICombatModifierLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAccuracyMax;
    
    FIRRAICombatModifierLimits();
};

