#include "IKRetargetPinBoneOpSettings.h"

FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings() {
    this->SkeletonToCopyFrom = ERetargetSourceOrTarget::Source;
    this->bCopyTranslation = false;
    this->TranslationMode = EPinBoneTranslationMode::CopyGlobalPosition;
    this->bCopyRotation = false;
    this->RotationMode = EPinBoneRotationMode::CopyGlobalRotation;
    this->bCopyScale = false;
    this->bPropagateToChildren = false;
}

