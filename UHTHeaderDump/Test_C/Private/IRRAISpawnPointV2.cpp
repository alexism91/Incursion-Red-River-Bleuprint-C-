#include "IRRAISpawnPointV2.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

AIRRAISpawnPointV2::AIRRAISpawnPointV2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->bFixedSpawn = false;
    this->CharacterClass = NULL;
    this->ControllerClass = NULL;
    this->SpawnCount = 3;
    this->SpawnHeightOffset = 100.00f;
    this->bPatrolSpawn = false;
    this->PatrolCountMin = 1;
    this->PatrolCountMax = 3;
    this->PatrolRadius = 1500.00f;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard->SetupAttachment(RootComponent);
}

void AIRRAISpawnPointV2::SpawnWave() {
}

int32 AIRRAISpawnPointV2::SpawnExplicit(const TArray<FIRRExplicitBotSpawn>& Spawns) {
    return 0;
}

void AIRRAISpawnPointV2::SpawnBotsAt(const TArray<FVector>& Locations) {
}

void AIRRAISpawnPointV2::SpawnBots(int32 Count) {
}


