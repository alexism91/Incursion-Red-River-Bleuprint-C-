#include "IRRAISpawnPoint.h"
#include "Templates/SubclassOf.h"

AIRRAISpawnPoint::AIRRAISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementGroup = NULL;
    this->PendingSpawnCount = 0;
}

void AIRRAISpawnPoint::StartSpawningBots(const TArray<TSubclassOf<AActor>>& CharacterClasses, UClass* ControllerClass, const TArray<FVector>& SpawnLocations, float SpawnHeightOffset, FName BotTypeId) {
}

AIRRAIBaseCharacter* AIRRAISpawnPoint::SpawnAI(TSubclassOf<AIRRAIBaseCharacter> CharacterClass, TSubclassOf<AAIController> ControllerClass, FVector Location, FRotator Rotation, float SpawnHeightOffset, FName BotTypeId) {
    return NULL;
}



void AIRRAISpawnPoint::JoinMovementGroup(AUPSMovementGroup* Group) {
}

bool AIRRAISpawnPoint::IsSpawning() const {
    return false;
}

AUPSMovementGroup* AIRRAISpawnPoint::InitMovementGroup(TSubclassOf<AUPSMovementGroup> GroupClass) {
    return NULL;
}


