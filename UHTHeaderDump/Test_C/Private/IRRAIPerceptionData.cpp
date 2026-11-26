#include "IRRAIPerceptionData.h"

FIRRAIPerceptionData::FIRRAIPerceptionData() {
    this->bVisible = false;
    this->bGainingSight = false;
    this->bLastCheckSuccessful = false;
    this->GainValue = 0.00f;
    this->LastScore = 0.00f;
    this->TimeIsVisibleChanged = 0.00f;
    this->LastLaneEvalTime = 0.00f;
}

