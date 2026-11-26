#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetRunIKRigOpSettings.h"
#include "IKRetargetRunIKRigController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetRunIKRigController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetRunIKRigController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetRunIKRigOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetRunIKRigOpSettings GetSettings();
    
};

