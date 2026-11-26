#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointSettingsFlags.generated.h"

UENUM()
enum class EChaosVDJointSettingsFlags {
    None,
    CollisionEnabled,
    MassConditioningEnabled,
    AngularSLerpPositionDriveEnabled = 4,
    AngularSLerpVelocityDriveEnabled = 8,
    AngularTwistPositionDriveEnabled = 16,
    AngularTwistVelocityDriveEnabled = 32,
    AngularSwingPositionDriveEnabled = 64,
    AngularSwingVelocityDriveEnabled = 128,
    SoftLinearLimitsEnabled = 256,
    SoftTwistLimitsEnabled = 512,
    SoftSwingLimitsEnabled = 1024,
    LinearPositionDriveEnabled0 = 2048,
    LinearPositionDriveEnable1 = 4096,
    LinearPositionDriveEnable2 = 8192,
    LinearVelocityDriveEnabled0 = 16384,
    LinearVelocityDriveEnabled1 = 32768,
    LinearVelocityDriveEnabled2 = 65536,
    UseLinearSolver = 131072,
};

