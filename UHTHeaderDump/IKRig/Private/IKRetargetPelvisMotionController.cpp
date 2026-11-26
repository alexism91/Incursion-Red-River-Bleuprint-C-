#include "IKRetargetPelvisMotionController.h"

UIKRetargetPelvisMotionController::UIKRetargetPelvisMotionController() {
}

void UIKRetargetPelvisMotionController::SetTargetPelvisBone(const FName InTargetPelvisBone) {
}

void UIKRetargetPelvisMotionController::SetSourcePelvisBone(const FName InSourcePelvisBone) {
}

void UIKRetargetPelvisMotionController::SetSettings(FIKRetargetPelvisMotionOpSettings InSettings) {
}

FName UIKRetargetPelvisMotionController::GetTargetPelvisBone() {
    return NAME_None;
}

FName UIKRetargetPelvisMotionController::GetSourcePelvisBone() {
    return NAME_None;
}

FIKRetargetPelvisMotionOpSettings UIKRetargetPelvisMotionController::GetSettings() {
    return FIKRetargetPelvisMotionOpSettings{};
}


