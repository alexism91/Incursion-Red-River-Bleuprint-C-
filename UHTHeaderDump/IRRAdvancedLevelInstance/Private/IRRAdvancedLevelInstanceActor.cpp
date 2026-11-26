#include "IRRAdvancedLevelInstanceActor.h"

AIRRAdvancedLevelInstanceActor::AIRRAdvancedLevelInstanceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNeverReset = false;
}

void AIRRAdvancedLevelInstanceActor::ResetMaterialParams() {
}

void AIRRAdvancedLevelInstanceActor::RandomizeMaterialParams() {
}

FIRRLevelInstanceMaterialParams AIRRAdvancedLevelInstanceActor::GetLastMaterialParams() {
    return FIRRLevelInstanceMaterialParams{};
}

TArray<AStaticMeshActor*> AIRRAdvancedLevelInstanceActor::GetAllStaticMeshActors(ALevelInstance* LevelInstance) {
    return TArray<AStaticMeshActor*>();
}

void AIRRAdvancedLevelInstanceActor::ApplyMaterialParams(FIRRLevelInstanceMaterialParams Params) {
}


