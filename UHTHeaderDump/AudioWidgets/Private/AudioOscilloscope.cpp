#include "AudioOscilloscope.h"

UAudioOscilloscope::UAudioOscilloscope() {
    this->AudioBus = NULL;
    this->MaxTimeWindowMs = 5000.00f;
    this->TimeWindowMs = 10.00f;
    this->AnalysisPeriodMs = 10.00f;
    this->bShowTimeGrid = true;
    this->TimeGridLabelsUnit = EXAxisLabelsUnit::Samples;
    this->bShowAmplitudeGrid = true;
    this->bShowAmplitudeLabels = true;
    this->AmplitudeGridLabelsUnit = EYAxisLabelsUnit::Linear;
    this->TriggerMode = EAudioOscilloscopeTriggerMode::None;
    this->TriggerThreshold = 0.00f;
    this->PanelLayoutType = EAudioPanelLayoutType::Basic;
    this->ChannelToAnalyze = 1;
}

void UAudioOscilloscope::StopProcessing() {
}

void UAudioOscilloscope::StartProcessing() {
}

bool UAudioOscilloscope::CanTriggeringBeSet() {
    return false;
}


