#include "IRRHackDeviceStatus.h"

FIRRHackDeviceStatus::FIRRHackDeviceStatus() {
    this->State = EIRRHackDeviceState::NoDeviceRequired;
    this->Charge = 0.00f;
    this->MaxCharge = 0.00f;
    this->RemainingCost = 0.00f;
}

