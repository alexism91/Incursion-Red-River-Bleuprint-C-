#include "DeterminismTestResult.h"

FDeterminismTestResult::FDeterminismTestResult() {
    this->Index = 0;
    this->Seed = 0;
    this->DataTypesTested = EPCGDataType::None;
    this->bFlagRaised = false;
}

