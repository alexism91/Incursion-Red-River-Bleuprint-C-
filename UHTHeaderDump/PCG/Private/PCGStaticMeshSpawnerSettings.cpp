#include "PCGStaticMeshSpawnerSettings.h"
#include "PCGMeshSelectorWeighted.h"
#include "Templates/SubclassOf.h"

UPCGStaticMeshSpawnerSettings::UPCGStaticMeshSpawnerSettings() {
    this->MeshSelectorType = UPCGMeshSelectorWeighted::StaticClass();
    this->MeshSelectorParameters = NULL;
    this->bAllowDescriptorChanges = true;
    this->InstanceDataPackerType = NULL;
    this->InstanceDataPackerParameters = NULL;
    this->bApplyMeshBoundsToPoints = true;
    this->bSynchronousLoad = false;
    this->bAllowMergeDifferentDataInSameInstancedComponents = true;
    this->bSilenceOverrideAttributeNotFoundErrors = false;
    this->bWarnOnIdenticalSpawn = true;
}

void UPCGStaticMeshSpawnerSettings::SetMeshSelectorType(TSubclassOf<UPCGMeshSelectorBase> InMeshSelectorType) {
}

void UPCGStaticMeshSpawnerSettings::SetInstancePackerType(TSubclassOf<UPCGInstanceDataPackerBase> InInstancePackerType) {
}


