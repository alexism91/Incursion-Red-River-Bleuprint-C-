#pragma once
#include "CoreMinimal.h"
#include "IKRigFBIKBoneSettings.h"
#include "IKRigFBIKGoalSettings.h"
#include "IKRigFBIKSettings.h"
#include "IKRigSolverControllerBase.h"
#include "IKRigFBIKController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRigFBIKController : public UIKRigSolverControllerBase {
    GENERATED_BODY()
public:
    UIKRigFBIKController();

    UFUNCTION(BlueprintCallable)
    void SetSolverSettings(FIKRigFBIKSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalSettings(const FName InGoalName, FIKRigFBIKGoalSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneSettings(const FName InBoneName, FIKRigFBIKBoneSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRigFBIKSettings GetSolverSettings();
    
    UFUNCTION(BlueprintCallable)
    FIKRigFBIKGoalSettings GetGoalSettings(const FName InGoalName);
    
    UFUNCTION(BlueprintCallable)
    FIKRigFBIKBoneSettings GetBoneSettings(const FName InBoneName);
    
};

