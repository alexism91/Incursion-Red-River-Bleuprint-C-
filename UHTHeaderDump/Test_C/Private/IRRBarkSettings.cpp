#include "IRRBarkSettings.h"

FIRRBarkSettings::FIRRBarkSettings() {
    this->DefaultCooldownMin = 0.00f;
    this->DefaultCooldownMax = 0.00f;
    this->bOnlyBarkForFriendlies = false;
    this->FriendlyRadius = 0.00f;
    this->PeaceEntryInterruptDelayMin = 0.00f;
    this->PeaceEntryInterruptDelayMax = 0.00f;
    this->CooldownShareRadius = 0.00f;
    this->SharedCooldownScale = 0.00f;
}

