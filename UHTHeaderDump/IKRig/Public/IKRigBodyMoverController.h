#pragma once
#include "CoreMinimal.h"
#include "IKRigBodyMoverGoalSettings.h"
#include "IKRigBodyMoverSettings.h"
#include "IKRigSolverControllerBase.h"
#include "IKRigBodyMoverController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRigBodyMoverController : public UIKRigSolverControllerBase {
    GENERATED_BODY()
public:
    UIKRigBodyMoverController();

    UFUNCTION(BlueprintCallable)
    void SetSolverSettings(FIKRigBodyMoverSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalSettings(const FName InGoalName, FIKRigBodyMoverGoalSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRigBodyMoverSettings GetSolverSettings();
    
    UFUNCTION(BlueprintCallable)
    FIKRigBodyMoverGoalSettings GetGoalSettings(const FName InGoalName);
    
};

