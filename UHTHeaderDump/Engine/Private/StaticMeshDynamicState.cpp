#include "StaticMeshDynamicState.h"

FStaticMeshDynamicState::FStaticMeshDynamicState() {
    this->Mesh = NULL;
    this->bOnlyOwnerSee = false;
    this->bOwnerNoSee = false;
}

