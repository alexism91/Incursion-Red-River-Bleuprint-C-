#include "PCGWaitSettings.h"

UPCGWaitSettings::UPCGWaitSettings() {
    this->WaitTimeInSeconds = 1.00f;
    this->WaitTimeInEngineFrames = 0;
    this->WaitTimeInRenderFrames = 0;
    this->bEndWaitWhenAllConditionsAreMet = true;
}


