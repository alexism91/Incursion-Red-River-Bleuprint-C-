#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetPelvisMotionOpSettings.h"
#include "IKRetargetPelvisMotionController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetPelvisMotionController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetPelvisMotionController();

    UFUNCTION(BlueprintCallable)
    void SetTargetPelvisBone(const FName InTargetPelvisBone);
    
    UFUNCTION(BlueprintCallable)
    void SetSourcePelvisBone(const FName InSourcePelvisBone);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetPelvisMotionOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FName GetTargetPelvisBone();
    
    UFUNCTION(BlueprintCallable)
    FName GetSourcePelvisBone();
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetPelvisMotionOpSettings GetSettings();
    
};

