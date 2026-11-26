#pragma once
#include "CoreMinimal.h"
#include "IKRigPoleSolverSettings.h"
#include "IKRigSolverBase.h"
#include "IKRigPoleSolver.generated.h"

USTRUCT(BlueprintType)
struct FIKRigPoleSolver : public FIKRigSolverBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigPoleSolverSettings Settings;
    
    IKRIG_API FIKRigPoleSolver();
};

