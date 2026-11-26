#include "ConvoyVehicle.h"

FConvoyVehicle::FConvoyVehicle() {
    this->Actor = NULL;
    this->DistanceBehindLead = 0.00f;
    this->DistanceAlongSpline = 0.00f;
    this->bDestroyed = false;
}

