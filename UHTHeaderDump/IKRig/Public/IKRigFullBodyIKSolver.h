#pragma once
#include "CoreMinimal.h"
#include "IKRigFBIKBoneSettings.h"
#include "IKRigFBIKGoalSettings.h"
#include "IKRigFBIKSettings.h"
#include "IKRigSolverBase.h"
#include "IKRigFullBodyIKSolver.generated.h"

USTRUCT(BlueprintType)
struct FIKRigFullBodyIKSolver : public FIKRigSolverBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigFBIKSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIKRigFBIKGoalSettings> AllGoalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIKRigFBIKBoneSettings> AllBoneSettings;
    
    IKRIG_API FIKRigFullBodyIKSolver();
};

