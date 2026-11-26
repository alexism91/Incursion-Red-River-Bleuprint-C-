#pragma once
#include "CoreMinimal.h"
#include "RetargetSpeedPlantingSettings.generated.h"

USTRUCT(BlueprintType)
struct FRetargetSpeedPlantingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeedCurveName;
    
    IKRIG_API FRetargetSpeedPlantingSettings();
};

