#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetStrideWarpingOpSettings.h"
#include "IKRetargetStrideWarpingController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetStrideWarpingController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetStrideWarpingController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetStrideWarpingOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetStrideWarpingOpSettings GetSettings();
    
};

