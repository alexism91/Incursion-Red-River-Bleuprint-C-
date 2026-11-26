#include "QueryLXRDebugOptions.h"

FQueryLXRDebugOptions::FQueryLXRDebugOptions() {
    this->bPrintDebug = false;
    this->bDebugRelevancy = false;
    this->bDebugTargets = false;
    this->bDebugVisibility = false;
    this->bDebugLXR = false;
    this->bDebugLXR_OnlyPassed = false;
    this->DebugRelevancyDrawTime = 0.00f;
    this->DebugVisibilityDrawTime = 0.00f;
    this->DebugLXRDrawTime = 0.00f;
}

