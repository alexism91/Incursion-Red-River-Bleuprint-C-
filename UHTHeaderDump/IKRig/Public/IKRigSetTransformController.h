#pragma once
#include "CoreMinimal.h"
#include "IKRigSetTransformSettings.h"
#include "IKRigSolverControllerBase.h"
#include "IKRigSetTransformController.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRigSetTransformController : public UIKRigSolverControllerBase {
    GENERATED_BODY()
public:
    UIKRigSetTransformController();

    UFUNCTION(BlueprintCallable)
    void SetSolverSettings(FIKRigSetTransformSettings InSettings);
    
    UFUNCTION(BlueprintCallable)
    FIKRigSetTransformSettings GetSolverSettings();
    
};

