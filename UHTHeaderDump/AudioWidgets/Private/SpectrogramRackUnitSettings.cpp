#include "SpectrogramRackUnitSettings.h"

FSpectrogramRackUnitSettings::FSpectrogramRackUnitSettings() {
    this->AnalyzerType = EAudioSpectrumAnalyzerType::FFT;
    this->FFTAnalyzerFFTSize = EFFTSize::DefaultSize;
    this->CQTAnalyzerFFTSize = EConstantQFFTSizeEnum::Min;
    this->PixelPlotMode = EAudioSpectrogramFrequencyAxisPixelBucketMode::Sample;
    this->FrequencyScale = EAudioSpectrogramFrequencyAxisScale::Linear;
    this->ColorMap = EAudioColorGradient::BlackToWhite;
    this->Orientation = Orient_Horizontal;
}

