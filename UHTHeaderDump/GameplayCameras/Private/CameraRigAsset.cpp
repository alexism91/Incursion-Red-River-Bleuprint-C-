#include "CameraRigAsset.h"

UCameraRigAsset::UCameraRigAsset() {
    this->RootNode = NULL;
    this->InitialOrientation = ECameraRigInitialOrientation::None;
    this->BuildStatus = ECameraBuildStatus::Dirty;
}


