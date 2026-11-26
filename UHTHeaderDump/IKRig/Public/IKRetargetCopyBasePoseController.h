#pragma once
#include "CoreMinimal.h"
#include "IKRetargetCopyBasePoseOpSettings.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetCopyBasePoseController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetCopyBasePoseController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetCopyBasePoseController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetCopyBasePoseOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetCopyBasePoseOpSettings GetSettings();
    
};

