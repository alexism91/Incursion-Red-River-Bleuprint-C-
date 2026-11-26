#include "PCGCreateCollisionDataSettings.h"

UPCGCreateCollisionDataSettings::UPCGCreateCollisionDataSettings() {
    this->CollisionQueryFlag = EPCGCollisionQueryFlag::Simple;
    this->bWarnIfAttributeCouldNotBeUsed = true;
    this->bSynchronousLoad = false;
}


