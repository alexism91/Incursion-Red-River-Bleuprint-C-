#pragma once
#include "CoreMinimal.h"
#include "IKRigLimbSolverSettings.h"
#include "IKRigSolverBase.h"
#include "IKRigLimbSolver.generated.h"

USTRUCT(BlueprintType)
struct FIKRigLimbSolver : public FIKRigSolverBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigLimbSolverSettings Settings;
    
    IKRIG_API FIKRigLimbSolver();
};

