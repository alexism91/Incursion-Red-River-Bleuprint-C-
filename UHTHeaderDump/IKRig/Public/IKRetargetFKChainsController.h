#pragma once
#include "CoreMinimal.h"
#include "IKRetargetFKChainsOpSettings.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetFKChainsController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetFKChainsController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetFKChainsController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetFKChainsOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetFKChainsOpSettings GetSettings();
    
};

