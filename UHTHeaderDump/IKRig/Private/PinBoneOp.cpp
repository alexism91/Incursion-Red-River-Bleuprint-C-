#include "PinBoneOp.h"

UPinBoneOp::UPinBoneOp() {
    this->PinTo = ERetargetSourceOrTarget::Target;
    this->bCopyTranslation = true;
    this->bCopyRotation = true;
    this->bCopyScale = true;
    this->TranslationMode = EPinBoneTranslationMode::CopyGlobalPosition;
    this->RotationMode = EPinBoneRotationMode::CopyGlobalRotation;
    this->bMaintainOffset = true;
    this->PinType = EPinBoneType::FullTransform;
}


