#include "IRRBarkSituation.h"

FIRRBarkSituation::FIRRBarkSituation() {
    this->Chance = 0.00f;
    this->DelayMin = 0.00f;
    this->DelayMax = 0.00f;
    this->CooldownOverride = 0.00f;
    this->Priority = 0;
    this->bForceToPlay = false;
    this->bIgnoreGate = false;
    this->bInterruptsVoice = false;
    this->bIgnoreFriendlyGate = false;
}

