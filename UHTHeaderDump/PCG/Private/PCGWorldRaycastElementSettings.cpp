#include "PCGWorldRaycastElementSettings.h"

UPCGWorldRaycastElementSettings::UPCGWorldRaycastElementSettings() {
    this->RaycastMode = EPCGWorldRaycastMode::Infinite;
    this->bOverrideRayDirections = false;
    this->bOverrideRayLengths = false;
    this->RayLength = 100000.00f;
    this->bKeepOriginalPointOnMiss = false;
    this->bUnbounded = false;
}


