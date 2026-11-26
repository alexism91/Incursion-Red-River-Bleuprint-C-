#include "ConvoyEscortSpawnSettings.h"

FConvoyEscortSpawnSettings::FConvoyEscortSpawnSettings() {
    this->BaseCount = 0;
    this->bUseCoopMultiplier = false;
    this->MaxCount = 0;
    this->bValidateSpawns = false;
    this->ControllerClass = NULL;
    this->SpawnHeightOffset = 0.00f;
}

