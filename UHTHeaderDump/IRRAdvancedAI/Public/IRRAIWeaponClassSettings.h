#pragma once
#include "CoreMinimal.h"
#include "IRRAIWeaponClassSettings.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAIWeaponClassSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseInitialAimDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAimRecoveryDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSpreadMultiplierSemiAuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSpreadMultiplierFullAuto;
    
    FIRRAIWeaponClassSettings();
};

