#pragma once
#include "CoreMinimal.h"
#include "IRRAICombatModifiers.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAICombatModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAccuracyModifier;
    
    FIRRAICombatModifiers();
};

