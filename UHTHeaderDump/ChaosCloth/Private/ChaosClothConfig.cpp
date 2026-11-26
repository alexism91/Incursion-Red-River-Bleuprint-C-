#include "ChaosClothConfig.h"

UChaosClothConfig::UChaosClothConfig() {
    this->MassMode = EClothMassMode::Density;
    this->UniformMass = 0.00f;
    this->TotalMass = 0.50f;
    this->Density = 0.35f;
    this->MinPerParticleMass = 0.00f;
    this->bUseBendingElements = false;
    this->BucklingRatio = 0.00f;
    this->VolumeStiffness = 0.00f;
    this->bUseGeodesicDistance = true;
    this->ShapeTargetStiffness = 0.00f;
    this->CollisionThickness = 1.00f;
    this->FrictionCoefficient = 0.80f;
    this->bUseCCD = false;
    this->bUseSelfCollisions = false;
    this->SelfCollisionThickness = 2.00f;
    this->SelfCollisionFriction = 0.00f;
    this->bUseSelfIntersections = false;
    this->bUseSelfCollisionSpheres = false;
    this->SelfCollisionSphereRadius = 0.50f;
    this->SelfCollisionSphereStiffness = 1.00f;
    this->SelfCollisionSphereRadiusCullMultiplier = 1.00f;
    this->bUseLegacyBackstop = false;
    this->DampingCoefficient = 0.01f;
    this->LocalDampingCoefficient = 0.00f;
    this->bUsePointBasedWindModel = false;
    this->bEnableOuterDrag = false;
    this->bEnableOuterLift = false;
    this->bUseGravityOverride = false;
    this->GravityScale = 1.00f;
    this->VelocityScaleSpace = EChaosSoftsSimulationSpace::ReferenceBoneSpace;
    this->bEnableLinearVelocityClamping = false;
    this->bEnableLinearAccelerationClamping = false;
    this->AngularVelocityScale = 0.75f;
    this->bEnableAngularVelocityClamping = false;
    this->MaxAngularVelocity = 200.00f;
    this->bEnableAngularAccelerationClamping = false;
    this->MaxAngularAcceleration = 12000.00f;
    this->FictitiousAngularScale = 1.00f;
    this->bUseTetrahedralConstraints = false;
    this->bUseThinShellVolumeConstraints = false;
    this->bUseContinuousCollisionDetection = false;
}


