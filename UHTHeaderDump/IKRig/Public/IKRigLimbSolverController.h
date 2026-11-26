#pragma once
#include "CoreMinimal.h"
#include "IKRigLimbSolverSettings.h"
#include "IKRigSolverControllerBase.h"
#include "IKRigLimbSolverController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRigLimbSolverController : public UIKRigSolverControllerBase {
    GENERATED_BODY()
public:
    UIKRigLimbSolverController();

    UFUNCTION(BlueprintCallable)
    void SetSolverSettings(FIKRigLimbSolverSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRigLimbSolverSettings GetSolverSettings();
    
};

