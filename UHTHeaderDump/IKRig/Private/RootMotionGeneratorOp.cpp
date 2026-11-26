#include "RootMotionGeneratorOp.h"

URootMotionGeneratorOp::URootMotionGeneratorOp() {
    this->RootMotionSource = ERootMotionSource::CopyFromSourceRoot;
    this->RootHeightSource = ERootMotionHeightSource::CopyHeightFromSource;
    this->bPropagateToNonRetargetedChildren = true;
    this->bMaintainOffsetFromPelvis = true;
    this->bRotateWithPelvis = false;
}


