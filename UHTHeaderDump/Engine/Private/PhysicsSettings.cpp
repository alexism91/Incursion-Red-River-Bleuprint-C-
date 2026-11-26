#include "PhysicsSettings.h"

UPhysicsSettings::UPhysicsSettings() {
    this->DefaultShapeComplexity = CTF_UseDefault;
    this->LockedAxis = ESettingsLockedAxis::Invalid;
    this->DefaultDegreesOfFreedom = ESettingsDOF::Full3D;
    this->bSuppressFaceRemapTable = false;
    this->bSupportUVFromHitResults = false;
    this->bDisableActiveActors = false;
    this->bDisableKinematicStaticPairs = false;
    this->bDisableKinematicKinematicPairs = false;
    this->bDisableCCD = false;
    this->AnimPhysicsMinDeltaTime = 0.00f;
    this->bSimulateAnimPhysicsAfterReset = false;
    this->MinPhysicsDeltaTime = 0.00f;
    this->MaxPhysicsDeltaTime = 0.03f;
    this->bSubstepping = false;
    this->bSubsteppingAsync = false;
    this->bTickPhysicsAsync = false;
    this->AsyncFixedTimeStepSize = 0.01f;
    this->MaxSubstepDeltaTime = 0.01f;
    this->MaxSubsteps = 8;
    this->SyncSceneSmoothingFactor = 0.00f;
    this->InitialAverageFrameRate = 0.02f;
    this->PhysXTreeRebuildRate = 10;
    this->PhysicalSurfaces.AddDefaulted(26);
    this->MinDeltaVelocityForHitEvents = 0.00f;
}

int32 UPhysicsSettings::GetPhysicsHistoryCount() const {
    return 0;
}


