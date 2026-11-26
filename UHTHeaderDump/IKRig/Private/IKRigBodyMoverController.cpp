#include "IKRigBodyMoverController.h"

UIKRigBodyMoverController::UIKRigBodyMoverController() {
}

void UIKRigBodyMoverController::SetSolverSettings(FIKRigBodyMoverSettings InSettings) {
}

void UIKRigBodyMoverController::SetGoalSettings(const FName InGoalName, FIKRigBodyMoverGoalSettings InSettings) {
}

FIKRigBodyMoverSettings UIKRigBodyMoverController::GetSolverSettings() {
    return FIKRigBodyMoverSettings{};
}

FIKRigBodyMoverGoalSettings UIKRigBodyMoverController::GetGoalSettings(const FName InGoalName) {
    return FIKRigBodyMoverGoalSettings{};
}


