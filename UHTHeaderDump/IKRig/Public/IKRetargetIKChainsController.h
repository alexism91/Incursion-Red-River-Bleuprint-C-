#pragma once
#include "CoreMinimal.h"
#include "IKRetargetIKChainsOpSettings.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetIKChainsController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetIKChainsController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetIKChainsController();

    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetIKChainsOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetIKChainsOpSettings GetSettings();
    
};

