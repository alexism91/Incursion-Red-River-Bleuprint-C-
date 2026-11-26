#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDWrapperDataBase.h"
#include "EChaosVDJointForceMode.h"
#include "EChaosVDJointMotionType.h"
#include "EChaosVDPlasticityType.h"
#include "ChaosVDJointSettingsDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDJointSettingsDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ConnectorTransforms[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Stiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearProjection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularProjection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShockPropagation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TeleportDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TeleportAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ParentInvMassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollisionEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMassConditioningEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLinearSolver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSoftLinearLimitsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSoftTwistLimitsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSoftSwingLimitsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAngularSLerpPositionDriveEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAngularSLerpVelocityDriveEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAngularTwistPositionDriveEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAngularTwistVelocityDriveEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAngularSwingPositionDriveEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAngularSwingVelocityDriveEnabled: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDJointMotionType LinearMotionTypes[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDJointMotionType AngularMotionTypes[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularLimits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDJointForceMode LinearSoftForceMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDJointForceMode AngularSoftForceMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftLinearStiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftLinearDamping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftTwistStiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftTwistDamping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftSwingStiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftSwingDamping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearRestitution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TwistRestitution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SwingRestitution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearContactDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TwistContactDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SwingContactDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearDrivePositionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearDriveVelocityTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinearPositionDriveEnabled0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinearPositionDriveEnabled1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinearPositionDriveEnabled2: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinearVelocityDriveEnabled0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinearVelocityDriveEnabled1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinearVelocityDriveEnabled2: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDJointForceMode LinearDriveForceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearDriveStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearDriveDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearDriveMaxForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat AngularDrivePositionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularDriveVelocityTarget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDJointForceMode AngularDriveForceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularDriveStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularDriveDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularDriveMaxTorque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearBreakForce;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearPlasticityLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDPlasticityType LinearPlasticityType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearPlasticityInitialDistanceSquared;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularBreakTorque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularPlasticityLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ContactTransferScale;
    
    CHAOSVDRUNTIME_API FChaosVDJointSettingsDataWrapper();
};

