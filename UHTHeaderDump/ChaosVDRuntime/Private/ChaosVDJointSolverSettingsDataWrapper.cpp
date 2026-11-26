#include "ChaosVDJointSolverSettingsDataWrapper.h"

FChaosVDJointSolverSettingsDataWrapper::FChaosVDJointSolverSettingsDataWrapper() {
    this->SwingTwistAngleTolerance = 0.00f;
    this->PositionTolerance = 0.00f;
    this->AngleTolerance = 0.00f;
    this->MinParentMassRatio = 0.00f;
    this->MaxInertiaRatio = 0.00f;
    this->MinSolverStiffness = 0.00f;
    this->MaxSolverStiffness = 0.00f;
    this->NumIterationsAtMaxSolverStiffness = 0;
    this->NumShockPropagationIterations = 0;
    this->bUseLinearSolver = false;
    this->bSortEnabled = false;
    this->bSolvePositionLast = false;
    this->bUsePositionBasedDrives = false;
    this->bEnableTwistLimits = false;
    this->bEnableSwingLimits = false;
    this->bEnableDrives = false;
    this->LinearStiffnessOverride = 0.00f;
    this->TwistStiffnessOverride = 0.00f;
    this->SwingStiffnessOverride = 0.00f;
    this->LinearProjectionOverride = 0.00f;
    this->AngularProjectionOverride = 0.00f;
    this->ShockPropagationOverride = 0.00f;
    this->LinearDriveStiffnessOverride = 0.00f;
    this->LinearDriveDampingOverride = 0.00f;
    this->AngularDriveStiffnessOverride = 0.00f;
    this->AngularDriveDampingOverride = 0.00f;
    this->SoftLinearStiffnessOverride = 0.00f;
    this->SoftLinearDampingOverride = 0.00f;
    this->SoftTwistStiffnessOverride = 0.00f;
    this->SoftTwistDampingOverride = 0.00f;
    this->SoftSwingStiffnessOverride = 0.00f;
    this->SoftSwingDampingOverride = 0.00f;
}

