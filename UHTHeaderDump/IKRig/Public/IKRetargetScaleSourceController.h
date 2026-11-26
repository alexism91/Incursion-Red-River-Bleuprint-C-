#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetScaleSourceOpSettings.h"
#include "IKRetargetScaleSourceController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetScaleSourceController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetScaleSourceController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetScaleSourceOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetScaleSourceOpSettings GetSettings();
    
};

