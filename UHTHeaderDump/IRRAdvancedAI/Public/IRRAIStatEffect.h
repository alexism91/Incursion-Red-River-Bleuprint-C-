#pragma once
#include "CoreMinimal.h"
#include "IRRAICombatModifiers.h"
#include "IRRAISenseModifiers.h"
#include "IRRAITempoModifiers.h"
#include "IRRAIStatEffect.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAIStatEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISenseModifiers Sense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAICombatModifiers Combat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAITempoModifiers Tempo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeCreated;
    
    FIRRAIStatEffect();
};

