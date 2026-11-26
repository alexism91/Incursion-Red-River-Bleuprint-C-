#include "MeshBlendActivatorLogic.h"

UMeshBlendActivatorLogic::UMeshBlendActivatorLogic() {
    this->ProcessBudget = 0.30f;
    this->bDisableRestrictions = false;
    this->IsBlendingEnabled = false;
    this->MeshBlendProcessor = NULL;
    this->CurrentMaxRadius = 0.00f;
    this->CurrentProcessStage = FindDistance;
    this->IsInitialized = false;
}


