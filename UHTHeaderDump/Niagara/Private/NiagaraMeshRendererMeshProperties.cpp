#include "NiagaraMeshRendererMeshProperties.h"

FNiagaraMeshRendererMeshProperties::FNiagaraMeshRendererMeshProperties() {
    this->LODMode = ENiagaraMeshLODMode::LODLevel;
    this->LODLevel = 0;
    this->LODBias = 0;
    this->LODDistanceFactor = 0.00f;
    this->bUseLODRange = false;
}

