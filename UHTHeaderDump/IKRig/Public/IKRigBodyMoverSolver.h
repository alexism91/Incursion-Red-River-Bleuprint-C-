#pragma once
#include "CoreMinimal.h"
#include "IKRigBodyMoverGoalSettings.h"
#include "IKRigBodyMoverSettings.h"
#include "IKRigSolverBase.h"
#include "IKRigBodyMoverSolver.generated.h"

USTRUCT(BlueprintType)
struct FIKRigBodyMoverSolver : public FIKRigSolverBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigBodyMoverSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIKRigBodyMoverGoalSettings> AllGoalSettings;
    
    IKRIG_API FIKRigBodyMoverSolver();
};

