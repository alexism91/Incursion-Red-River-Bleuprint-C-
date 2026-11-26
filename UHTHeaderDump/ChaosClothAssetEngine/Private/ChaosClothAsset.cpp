#include "ChaosClothAsset.h"

UChaosClothAsset::UChaosClothAsset() {
    this->LODInfo.AddDefaulted(1);
    this->Skeleton = NULL;
    this->PhysicsAsset = NULL;
    this->bSmoothTransition = true;
    this->bUseMultipleInfluences = false;
    this->SkinningKernelRadius = 30.00f;
}


