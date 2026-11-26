#include "TargetChainIKSettings.h"

FTargetChainIKSettings::FTargetChainIKSettings() {
    this->EnableIK = false;
    this->BlendToSource = 0.00f;
    this->BlendToSourceTranslation = 0.00f;
    this->BlendToSourceRotation = 0.00f;
    this->ScaleVertical = 0.00f;
    this->Extension = 0.00f;
    this->bAffectedByIKWarping = false;
}

