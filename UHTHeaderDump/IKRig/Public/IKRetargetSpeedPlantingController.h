#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetSpeedPlantingOpSettings.h"
#include "IKRetargetSpeedPlantingController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetSpeedPlantingController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetSpeedPlantingController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetSpeedPlantingOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetSpeedPlantingOpSettings GetSettings();
    
};

