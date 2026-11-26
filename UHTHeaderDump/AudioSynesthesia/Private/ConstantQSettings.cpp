#include "ConstantQSettings.h"

UConstantQSettings::UConstantQSettings() {
    this->StartingFrequencyHz = 40.00f;
    this->NumBands = 48;
    this->NumBandsPerOctave = 12.00f;
    this->AnalysisPeriodInSeconds = 0.01f;
    this->bDownmixToMono = false;
    this->FFTSize = EConstantQFFTSizeEnum::XLarge;
    this->WindowType = EFFTWindowType::Blackman;
    this->SpectrumType = EAudioSpectrumType::PowerSpectrum;
    this->BandWidthStretch = 1.00f;
    this->CQTNormalization = EConstantQNormalizationEnum::EqualEnergy;
    this->NoiseFloorDb = -60.00f;
}


