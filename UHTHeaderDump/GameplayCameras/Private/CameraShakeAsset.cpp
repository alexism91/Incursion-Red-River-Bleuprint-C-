#include "CameraShakeAsset.h"

UCameraShakeAsset::UCameraShakeAsset() {
    this->RootNode = NULL;
    this->BlendIn = NULL;
    this->BlendOut = NULL;
    this->bIsSingleInstance = false;
    this->BuildStatus = ECameraBuildStatus::Dirty;
}


