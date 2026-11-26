#pragma once
#include "CoreMinimal.h"
#include "IKRetargetCurveRemapOpSettings.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetCurveRemapController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetCurveRemapController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetCurveRemapController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetCurveRemapOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetCurveRemapOpSettings GetSettings();
    
};

