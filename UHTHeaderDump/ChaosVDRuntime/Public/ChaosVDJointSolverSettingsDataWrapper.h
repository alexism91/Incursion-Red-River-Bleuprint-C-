#pragma once
#include "CoreMinimal.h"
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDJointSolverSettingsDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDJointSolverSettingsDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SwingTwistAngleTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PositionTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngleTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinParentMassRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxInertiaRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSolverStiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSolverStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumIterationsAtMaxSolverStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumShockPropagationIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLinearSolver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSortEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSolvePositionLast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePositionBasedDrives: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTwistLimits: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSwingLimits: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDrives: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TwistStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SwingStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearProjectionOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularProjectionOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShockPropagationOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearDriveStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearDriveDampingOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularDriveStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularDriveDampingOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftLinearStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftLinearDampingOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftTwistStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftTwistDampingOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftSwingStiffnessOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftSwingDampingOverride;
    
    CHAOSVDRUNTIME_API FChaosVDJointSolverSettingsDataWrapper();
};

