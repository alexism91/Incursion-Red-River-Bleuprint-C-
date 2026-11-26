#include "GameplayCamerasSettings.h"

UGameplayCamerasSettings::UGameplayCamerasSettings() {
    this->bAutoBuildInPIE = true;
    this->DefaultViewRotationMode = EGameplayCamerasViewRotationMode::None;
    this->CombinedCameraRigNumThreshold = 10;
    this->DefaultIKAimingAngleTolerance = 0.10f;
    this->DefaultIKAimingDistanceTolerance = 1.00f;
    this->DefaultIKAimingMaxIterations = 3;
    this->DefaultIKAimingMinDistance = 100.00f;
}


