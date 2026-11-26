#include "FirstPersonFlashbang.h"

UFirstPersonFlashbang::UFirstPersonFlashbang() {
    this->FlashPostProcessMaterialParent = NULL;
    this->FlashIntensityParameterName = TEXT("Flash intensity");
    this->AfterimageIntensityParameterName = TEXT("Afterimage intensity");
    this->ScreenPositionXParameterName = TEXT("Screen position x");
    this->ScreenPositionYParameterName = TEXT("Screen position y");
    this->InvertMaskParameterName = TEXT("Invert mask");
    this->AfterimageTextureParameterName = TEXT("Afterimage");
    this->AfterimageCaptureSize = 512;
    this->BlendableWeight = 1.00f;
    this->AfterimageRenderTarget = NULL;
    this->FlashMaterialInstance = NULL;
}

void UFirstPersonFlashbang::StopFlash() {
}

void UFirstPersonFlashbang::PlayFlash(FFlashbangHitEvaluation Evaluation) {
}


