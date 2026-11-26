#include "IRRBriefingWaitSettings.h"

FIRRBriefingWaitSettings::FIRRBriefingWaitSettings() {
    this->MaxWaitTime = 0.00f;
    this->RetryInterval = 0.00f;
    this->WaitTimeoutPolicy = EIRRBriefingWaitTimeout::Reroll;
}

