#include "CameraAsset.h"

UCameraAsset::UCameraAsset() {
    this->CameraDirector = NULL;
    this->BuildStatus = ECameraBuildStatus::Dirty;
}


