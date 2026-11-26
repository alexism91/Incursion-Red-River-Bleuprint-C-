#include "HTNDecorator_CanThrowGrenade.h"

UHTNDecorator_CanThrowGrenade::UHTNDecorator_CanThrowGrenade() {
    this->bCheckTargetRange = true;
    this->bCheckClearArc = true;
    this->Style = EIRRGrenadeThrowStyle::Auto;
}


