#include "IRRMissionSpawnPosition.h"

AIRRMissionSpawnPosition::AIRRMissionSpawnPosition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCounter = 0;
    this->bDebug = false;
}

void AIRRMissionSpawnPosition::OnSelected_Implementation(bool Selected) {
}

FGuid AIRRMissionSpawnPosition::GetSpawnPositionUID() const {
    return FGuid{};
}

TArray<FIRRConnectedActorSnap> AIRRMissionSpawnPosition::GetConnectedActors_Implementation(bool& bSuccess) {
    return TArray<FIRRConnectedActorSnap>();
}


