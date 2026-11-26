#include "EngineCameraAnimationFunctionLibrary.h"

UEngineCameraAnimationFunctionLibrary::UEngineCameraAnimationFunctionLibrary() {
}

ECameraShakePlaySpace UEngineCameraAnimationFunctionLibrary::Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace) {
    return ECameraShakePlaySpace::CameraLocal;
}

ECameraAnimationPlaySpace UEngineCameraAnimationFunctionLibrary::Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace) {
    return ECameraAnimationPlaySpace::CameraLocal;
}

UCameraAnimationCameraModifier* UEngineCameraAnimationFunctionLibrary::Conv_CameraAnimationCameraModifier(APlayerCameraManager* PlayerCameraManager) {
    return NULL;
}


