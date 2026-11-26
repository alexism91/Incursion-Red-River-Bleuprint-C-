#pragma once
#include "CoreMinimal.h"
#include "IKRigPoleSolverSettings.h"
#include "IKRigSolverControllerBase.h"
#include "IKRigPoleSolverController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRigPoleSolverController : public UIKRigSolverControllerBase {
    GENERATED_BODY()
public:
    UIKRigPoleSolverController();

    UFUNCTION(BlueprintCallable)
    void SetSolverSettings(FIKRigPoleSolverSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRigPoleSolverSettings GetSolverSettings();
    
};

