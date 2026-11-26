#include "IRRZoneSpawnSettings.h"

FIRRZoneSpawnSettings::FIRRZoneSpawnSettings() {
    this->BotCount = 0;
    this->Priority = 0;
    this->NonOptional = EIRRZoneTriState::Inherit;
    this->PreCache = EIRRZoneTriState::Inherit;
    this->SelfContained = EIRRZoneTriState::Inherit;
    this->Enabled = EIRRZoneTriState::Inherit;
}

