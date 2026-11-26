#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraCalibrationStep.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UCameraCalibrationStep : public UObject {
    GENERATED_BODY()
public:
    UCameraCalibrationStep();

};

