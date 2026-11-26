#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpSettingsBase.h"
#include "RetargetSpeedPlantingSettings.h"
#include "IKRetargetSpeedPlantingOpSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetSpeedPlantingOpSettings : public FIKRetargetOpSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetSpeedPlantingSettings> ChainsToSpeedPlant;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpeedThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Stiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CriticalDamping;
    
    IKRIG_API FIKRetargetSpeedPlantingOpSettings();
};

