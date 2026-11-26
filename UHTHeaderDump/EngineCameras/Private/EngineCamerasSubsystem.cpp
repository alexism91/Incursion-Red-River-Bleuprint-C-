#include "EngineCamerasSubsystem.h"

UEngineCamerasSubsystem::UEngineCamerasSubsystem() {
}

void UEngineCamerasSubsystem::StopCameraAnimation(APlayerController* PlayerController, const FCameraAnimationHandle& Handle, bool bImmediate) {
}

void UEngineCamerasSubsystem::StopAllCameraAnimationsOf(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, bool bImmediate) {
}

void UEngineCamerasSubsystem::StopAllCameraAnimations(APlayerController* PlayerController, bool bImmediate) {
}

FCameraAnimationHandle UEngineCamerasSubsystem::PlayCameraAnimation(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, FCameraAnimationParams Params) {
    return FCameraAnimationHandle{};
}

bool UEngineCamerasSubsystem::IsCameraAnimationActive(APlayerController* PlayerController, const FCameraAnimationHandle& Handle) const {
    return false;
}


