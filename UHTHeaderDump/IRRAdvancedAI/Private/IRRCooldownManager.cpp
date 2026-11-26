#include "IRRCooldownManager.h"

FIRRCooldownManager::FIRRCooldownManager() {
    this->LastGlobalUseTime = 0.00f;
    this->GlobalCooldownDuration = 0.00f;
}

