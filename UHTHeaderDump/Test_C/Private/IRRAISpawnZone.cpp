#include "IRRAISpawnZone.h"

AIRRAISpawnZone::AIRRAISpawnZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerClass = NULL;
    this->EnemyCount = 5;
    this->SpawnHeightOffset = 100.00f;
    this->ExecPoint = NULL;
}

void AIRRAISpawnZone::SpawnWave() {
}


