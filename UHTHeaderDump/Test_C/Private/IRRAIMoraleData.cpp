#include "IRRAIMoraleData.h"

FIRRAIMoraleData::FIRRAIMoraleData() {
    this->DynamicMorale = 0.00f;
    this->BaseMorale = 0.00f;
    this->PanicState = EIRRAIMoralePanicState::None;
    this->TimePanicStateStarted = 0.00f;
}

