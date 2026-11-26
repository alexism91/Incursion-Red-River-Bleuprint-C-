#include "IRRSpawnReinforcementSettings.h"

FIRRSpawnReinforcementSettings::FIRRSpawnReinforcementSettings() {
    this->bEnabled = false;
    this->MinSpawns = 0;
    this->MaxSpawns = 0;
    this->bUseCoopMultiplier = false;
    this->MinSpawnRadius = 0.00f;
    this->MaxSpawnRadius = 0.00f;
    this->TargetReachRadius = 0.00f;
    this->ClusterRadius = 0.00f;
    this->RallySeedCount = 0;
    this->RallyFallbackCount = 0;
    this->RallyIndoorWeight = 0.00f;
    this->RallyCoverWeight = 0.00f;
    this->bValidateSpawns = false;
    this->bSpawnInWaves = false;
    this->SpawnPerWave = 0;
    this->WaveInterval = 0.00f;
}

