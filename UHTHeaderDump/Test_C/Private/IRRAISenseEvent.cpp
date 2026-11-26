#include "IRRAISenseEvent.h"

FIRRAISenseEvent::FIRRAISenseEvent() {
    this->EstimationRadius = 0.00f;
    this->Instigator = NULL;
    this->Owner = NULL;
    this->TimeOccurred = 0.00f;
    this->PerceptionDelay = 0.00f;
    this->TimePerceived = 0.00f;
}

