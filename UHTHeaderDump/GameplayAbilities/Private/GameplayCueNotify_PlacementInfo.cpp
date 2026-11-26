#include "GameplayCueNotify_PlacementInfo.h"

FGameplayCueNotify_PlacementInfo::FGameplayCueNotify_PlacementInfo() {
    this->AttachPolicy = EGameplayCueNotify_AttachPolicy::DoNotAttach;
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->bOverrideRotation = false;
    this->bOverrideScale = false;
}

