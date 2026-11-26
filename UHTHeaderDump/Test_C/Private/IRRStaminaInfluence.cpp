#include "IRRStaminaInfluence.h"

FIRRStaminaInfluence::FIRRStaminaInfluence() {
    this->Value = 0.00f;
    this->DrainMultiplier = 0.00f;
    this->RecoverMultiplier = 0.00f;
    this->bUseInventoryWeightMultiplier = false;
    this->bUseWeaponErgonomicsMultiplier = false;
    this->bUseEquippedItemAimDrainMultiplier = false;
}

