#include "HTNTask_TryReportLocationSearched.h"

UHTNTask_TryReportLocationSearched::UHTNTask_TryReportLocationSearched() {
    this->MaxDistanceToLastKnown = 65.00f;
    this->MinTimeSinceSensed = 2.00f;
    this->bFailIfNoneSearched = false;
    this->ChanceToPlay = 40.00f;
    this->ForceToPlay = false;
    this->IgnoreGate = false;
    this->Delay = -1.00f;
    this->Priority = 0;
    this->CooldownOverride = 0.00f;
}


