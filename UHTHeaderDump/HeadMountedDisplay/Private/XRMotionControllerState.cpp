#include "XRMotionControllerState.h"

FXRMotionControllerState::FXRMotionControllerState() {
    this->bValid = false;
    this->XRSpaceType = EXRSpaceType::UnrealWorldSpace;
    this->Hand = EControllerHand::Left;
    this->TrackingStatus = ETrackingStatus::NotTracked;
    this->XRControllerPoseType = EXRControllerPoseType::Aim;
}

