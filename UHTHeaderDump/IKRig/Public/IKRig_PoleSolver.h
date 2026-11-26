#pragma once
#include "CoreMinimal.h"
#include "IKRigSolver.h"
#include "IKRig_PoleSolver.generated.h"

class UIKRig_PoleSolverEffector;

UCLASS(Blueprintable, MinimalAPI)
class UIKRig_PoleSolver : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRig_PoleSolverEffector* Effector;
    
    UIKRig_PoleSolver();

};

