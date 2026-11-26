#include "CameraRigTransition.h"

UCameraRigTransition::UCameraRigTransition() {
    this->Blend = NULL;
    this->InitialOrientation = ECameraRigInitialOrientation::None;
    this->bOverrideInitialOrientation = false;
    this->bAllowCameraRigMerging = false;
}


