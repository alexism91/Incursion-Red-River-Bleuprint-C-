#include "PCGSkinnedMeshSpawnerSettings.h"
#include "Templates/SubclassOf.h"

UPCGSkinnedMeshSpawnerSettings::UPCGSkinnedMeshSpawnerSettings() {
    this->MeshSelectorParameters = NULL;
    this->InstanceDataPackerType = NULL;
    this->InstanceDataPackerParameters = NULL;
    this->bApplyMeshBoundsToPoints = true;
    this->bSynchronousLoad = false;
    this->bSilenceOverrideAttributeNotFoundErrors = false;
    this->bWarnOnIdenticalSpawn = true;
}

void UPCGSkinnedMeshSpawnerSettings::SetInstancePackerType(TSubclassOf<UPCGSkinnedMeshInstanceDataPackerBase> InInstancePackerType) {
}


