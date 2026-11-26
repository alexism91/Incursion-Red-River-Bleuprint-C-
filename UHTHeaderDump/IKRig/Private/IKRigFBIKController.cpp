#include "IKRigFBIKController.h"

UIKRigFBIKController::UIKRigFBIKController() {
}

void UIKRigFBIKController::SetSolverSettings(FIKRigFBIKSettings InSettings) {
}

void UIKRigFBIKController::SetGoalSettings(const FName InGoalName, FIKRigFBIKGoalSettings InSettings) {
}

void UIKRigFBIKController::SetBoneSettings(const FName InBoneName, FIKRigFBIKBoneSettings InSettings) {
}

FIKRigFBIKSettings UIKRigFBIKController::GetSolverSettings() {
    return FIKRigFBIKSettings{};
}

FIKRigFBIKGoalSettings UIKRigFBIKController::GetGoalSettings(const FName InGoalName) {
    return FIKRigFBIKGoalSettings{};
}

FIKRigFBIKBoneSettings UIKRigFBIKController::GetBoneSettings(const FName InBoneName) {
    return FIKRigFBIKBoneSettings{};
}


