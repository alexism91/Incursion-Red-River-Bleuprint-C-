#include "IRRSuppressionData.h"

FIRRSuppressionData::FIRRSuppressionData() {
    this->PrimarySuppressor = NULL;
    this->LastSuppressionAddedTime = 0.00f;
    this->PinnedFraction = 0.00f;
    this->SuppressionLevel = 0.00f;
    this->IncomingFire = 0.00f;
    this->SuppressionState = EIRRAISuppressionState::None;
}

