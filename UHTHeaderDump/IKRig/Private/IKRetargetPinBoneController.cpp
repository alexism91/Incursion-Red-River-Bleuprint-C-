#include "IKRetargetPinBoneController.h"

UIKRetargetPinBoneController::UIKRetargetPinBoneController() {
}

void UIKRetargetPinBoneController::SetSettings(FIKRetargetPinBoneOpSettings InSettings) {
}

void UIKRetargetPinBoneController::SetBonePair(const FName InBoneToCopyFrom, const FName InBoneToCopyTo) {
}

FIKRetargetPinBoneOpSettings UIKRetargetPinBoneController::GetSettings() {
    return FIKRetargetPinBoneOpSettings{};
}

TMap<FName, FName> UIKRetargetPinBoneController::GetAllBonePairs() {
    return TMap<FName, FName>();
}

void UIKRetargetPinBoneController::ClearAllBonePairs() {
}


