#include "IRRCinematicLookSettings.h"

FIRRCinematicLookSettings::FIRRCinematicLookSettings() {
    this->ExposureMode = EIRRCinematicExposureMode::Level;
    this->ExposureCompensation = 0.00f;
    this->AutoExposureMinEV = 0.00f;
    this->AutoExposureMaxEV = 0.00f;
    this->AutoExposureSpeed = 0.00f;
    this->bOverrideMotionBlur = false;
    this->MotionBlurAmount = 0.00f;
    this->MotionBlurMax = 0.00f;
    this->bOverrideLensEffects = false;
    this->Vignette = 0.00f;
    this->FilmGrain = 0.00f;
    this->ChromaticAberration = 0.00f;
    this->Bloom = 0.00f;
    this->LensFlare = 0.00f;
    this->Sharpen = 0.00f;
    this->bOverrideColor = false;
    this->WhiteTemperature = 0.00f;
    this->WhiteTint = 0.00f;
    this->Saturation = 0.00f;
    this->Contrast = 0.00f;
    this->Gain = 0.00f;
    this->BlendWeight = 0.00f;
}

