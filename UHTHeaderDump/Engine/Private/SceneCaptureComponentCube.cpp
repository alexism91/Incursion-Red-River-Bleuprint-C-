#include "SceneCaptureComponentCube.h"

USceneCaptureComponentCube::USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TextureTarget = NULL;
    this->bCaptureRotation = false;
    this->PostProcessBlendWeight = 1.00f;
}

void USceneCaptureComponentCube::CaptureScene() {
}


