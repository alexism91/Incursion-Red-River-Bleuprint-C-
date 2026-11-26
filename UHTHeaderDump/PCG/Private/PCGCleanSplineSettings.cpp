#include "PCGCleanSplineSettings.h"

UPCGCleanSplineSettings::UPCGCleanSplineSettings() {
    this->bFuseColocatedControlPoints = true;
    this->ColocationDistanceThreshold = 0.00f;
    this->bUseSplineLocalSpace = false;
    this->FuseMode = EPCGControlPointFuseMode::Auto;
    this->bRemoveCollinearControlPoints = true;
    this->CollinearAngleThreshold = 5.00f;
    this->bUseRadians = false;
}


