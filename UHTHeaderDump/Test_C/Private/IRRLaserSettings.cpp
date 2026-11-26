#include "IRRLaserSettings.h"

FIRRLaserSettings::FIRRLaserSettings() {
    this->LaserCollisionChannel = ECC_WorldStatic;
    this->MaxLaserDistance = 0.00f;
    this->LaserScaleFactor = 0.00f;
    this->LaserDecalScaleFactor = 0.00f;
    this->DotSizeMultiplier = 0.00f;
    this->ReferenceFieldOfView = 0.00f;
    this->ViewmodelFOVCollection = NULL;
    this->MinLaserDecalSize = 0.00f;
    this->MaxLaserDecalSize = 0.00f;
}

