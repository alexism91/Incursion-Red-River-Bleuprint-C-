#include "XRHandTrackingState.h"

FXRHandTrackingState::FXRHandTrackingState() {
    this->bValid = false;
    this->XRSpaceType = EXRSpaceType::UnrealWorldSpace;
    this->Hand = EControllerHand::Left;
    this->TrackingStatus = ETrackingStatus::NotTracked;
}

