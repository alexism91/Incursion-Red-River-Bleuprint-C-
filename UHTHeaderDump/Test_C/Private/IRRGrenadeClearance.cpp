#include "IRRGrenadeClearance.h"

FIRRGrenadeClearance::FIRRGrenadeClearance() {
    this->Style = EIRRGrenadeThrowStyle::Auto;
    this->bOnlyWithoutLineOfFire = false;
    this->MinTimeWithoutLineOfFire = 0.00f;
    this->MaxLastKnownAge = 0.00f;
    this->Cooldown = 0.00f;
    this->ChancePerCheck = 0.00f;
    this->LiveGrenadeSpacing = 0.00f;
}

