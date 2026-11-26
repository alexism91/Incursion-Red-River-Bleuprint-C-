#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpControllerBase.h"
#include "IKRetargetRootMotionOpSettings.h"
#include "IKRetargetRootMotionController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRetargetRootMotionController : public UIKRetargetOpControllerBase {
    GENERATED_BODY()
public:
    UIKRetargetRootMotionController();

    UFUNCTION(BlueprintCallable)
    void SetTargetRootBone(const FName InTargetRootBone);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPelvisBone(const FName InTargetPelvisBone);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceRootBone(const FName InSourceRootBone);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(FIKRetargetRootMotionOpSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FName GetTargetRootBone();
    
    UFUNCTION(BlueprintCallable)
    FName GetTargetPelvisBone();
    
    UFUNCTION(BlueprintCallable)
    FName GetSourceRootBone();
    
    UFUNCTION(BlueprintCallable)
    FIKRetargetRootMotionOpSettings GetSettings();
    
};

