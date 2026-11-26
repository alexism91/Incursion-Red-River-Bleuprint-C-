#include "SpectrumAnalyzerRackUnitSettings.h"

FSpectrumAnalyzerRackUnitSettings::FSpectrumAnalyzerRackUnitSettings() {
    this->Ballistics = EAudioSpectrumAnalyzerBallistics::Analog;
    this->AnalyzerType = EAudioSpectrumAnalyzerType::FFT;
    this->FFTAnalyzerFFTSize = EFFTSize::DefaultSize;
    this->CQTAnalyzerFFTSize = EConstantQFFTSizeEnum::Min;
    this->TiltSpectrum = EAudioSpectrumPlotTilt::NoTilt;
    this->PixelPlotMode = EAudioSpectrumPlotFrequencyAxisPixelBucketMode::Sample;
    this->FrequencyScale = EAudioSpectrumPlotFrequencyAxisScale::Linear;
    this->bDisplayFrequencyAxisLabels = false;
    this->bDisplaySoundLevelAxisLabels = false;
}

