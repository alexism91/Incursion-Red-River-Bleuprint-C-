#include "InstancedSkinnedMeshComponentInstanceData.h"

FInstancedSkinnedMeshComponentInstanceData::FInstancedSkinnedMeshComponentInstanceData() {
    this->SkinnedAsset = NULL;
    this->bHasPerInstanceHitProxies = false;
    this->bIsInstanceDataGPUOnly = false;
    this->NumInstancesGPUOnly = 0;
}

