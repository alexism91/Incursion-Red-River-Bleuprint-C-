#include "VehicleDamageEvent.h"

FVehicleDamageEvent::FVehicleDamageEvent() {
    this->Damage = 0.00f;
    this->bLethal = false;
    this->bThrowsWreck = false;
    this->Causer = NULL;
    this->InstigatedBy = NULL;
}

