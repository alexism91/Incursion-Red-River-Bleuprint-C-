#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRigSolverControllerBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIKRigSolverControllerBase : public UObject {
    GENERATED_BODY()
public:
    UIKRigSolverControllerBase();

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnabled();
    
};

