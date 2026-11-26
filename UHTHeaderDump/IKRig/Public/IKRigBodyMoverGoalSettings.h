#pragma once
#include "CoreMinimal.h"
#include "IKRigGoalSettingsBase.h"
#include "IKRigBodyMoverGoalSettings.generated.h"

USTRUCT(BlueprintType)
struct FIKRigBodyMoverGoalSettings : public FIKRigGoalSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceMultiplier;
    
    IKRIG_API FIKRigBodyMoverGoalSettings();
};

