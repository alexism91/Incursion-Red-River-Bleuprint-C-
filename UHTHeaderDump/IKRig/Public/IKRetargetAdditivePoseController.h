#pragma once
#include "CoreMinimal.h"
#include "IKRetargetAdditivePoseOpSettings.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetAdditivePoseController.generated.h"

UCLASS(Blueprintable)
class IKRIG_API UIKRetargetAdditivePoseController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetAdditivePoseController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetAdditivePoseOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetAdditivePoseOpSettings GetSettings();
    
};

