#include "WaveTableBank.h"

UWaveTableBank::UWaveTableBank() {
    this->SampleMode = EWaveTableSamplingMode::FixedResolution;
    this->Resolution = EWaveTableResolution::Res_256;
    this->SampleRate = 48000;
    this->bBipolar = true;
}


