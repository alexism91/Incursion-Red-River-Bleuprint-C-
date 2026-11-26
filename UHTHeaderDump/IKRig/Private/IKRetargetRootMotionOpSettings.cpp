#include "IKRetargetRootMotionOpSettings.h"

FIKRetargetRootMotionOpSettings::FIKRetargetRootMotionOpSettings() {
    this->RootMotionSource = ERootMotionSource::CopyFromSourceRoot;
    this->bRotateWithPelvis = false;
    this->RootHeightSource = ERootMotionHeightSource::CopyHeightFromSource;
    this->bMaintainOffsetFromPelvis = false;
    this->bPropagateToNonRetargetedChildren = false;
}

