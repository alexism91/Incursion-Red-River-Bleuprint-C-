#include "IRRCosmeticBulletSettings.h"

UIRRCosmeticBulletSettings::UIRRCosmeticBulletSettings() {
    this->bEnabled = true;
    this->SimStepHz = 30.00f;
    this->MaxBullets = 256;
    this->MaxLifetimeSeconds = 5.00f;
    this->MaxRange = 100000.00f;
    this->MinSpeed = 1000.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->TracerVisibleRange = 60000.00f;
}


