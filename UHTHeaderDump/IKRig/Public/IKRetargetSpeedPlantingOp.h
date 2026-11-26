#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetSpeedPlantingOpSettings.h"
#include "IKRetargetSpeedPlantingOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetSpeedPlantingOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetSpeedPlantingOpSettings Settings;
    
    IKRIG_API FIKRetargetSpeedPlantingOp();
};

