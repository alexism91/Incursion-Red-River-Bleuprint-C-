#pragma once
#include "CoreMinimal.h"
#include "IKRetargetAlignPoleVectorOpSettings.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetAlignPoleVectorController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetAlignPoleVectorController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetAlignPoleVectorController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetAlignPoleVectorOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetAlignPoleVectorOpSettings GetSettings();
    
};

