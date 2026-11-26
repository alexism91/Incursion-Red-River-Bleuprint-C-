#include "IKRetargetRootMotionController.h"

UIKRetargetRootMotionController::UIKRetargetRootMotionController() {
}

void UIKRetargetRootMotionController::SetTargetRootBone(const FName InTargetRootBone) {
}

void UIKRetargetRootMotionController::SetTargetPelvisBone(const FName InTargetPelvisBone) {
}

void UIKRetargetRootMotionController::SetSourceRootBone(const FName InSourceRootBone) {
}

void UIKRetargetRootMotionController::SetSettings(FIKRetargetRootMotionOpSettings InSettings) {
}

FName UIKRetargetRootMotionController::GetTargetRootBone() {
    return NAME_None;
}

FName UIKRetargetRootMotionController::GetTargetPelvisBone() {
    return NAME_None;
}

FName UIKRetargetRootMotionController::GetSourceRootBone() {
    return NAME_None;
}

FIKRetargetRootMotionOpSettings UIKRetargetRootMotionController::GetSettings() {
    return FIKRetargetRootMotionOpSettings{};
}


