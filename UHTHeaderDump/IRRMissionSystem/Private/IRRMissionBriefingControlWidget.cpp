#include "IRRMissionBriefingControlWidget.h"

UIRRMissionBriefingControlWidget::UIRRMissionBriefingControlWidget() {
    this->PB_ProgressBar = NULL;
    this->ProgressSlider = NULL;
    this->Time = NULL;
    this->Duration = NULL;
    this->Play = NULL;
    this->Stop = NULL;
    this->DurationFormat = FText::FromString(TEXT(" / {0}"));
    this->LoadedAgent = NULL;
}

void UIRRMissionBriefingControlWidget::TogglePlayPause() {
}

void UIRRMissionBriefingControlWidget::StopBriefing() {
}

void UIRRMissionBriefingControlWidget::SeekBriefing(float Progress) {
}

void UIRRMissionBriefingControlWidget::PlayBriefing() {
}

void UIRRMissionBriefingControlWidget::PauseBriefing() {
}


bool UIRRMissionBriefingControlWidget::IsLoadedBriefingPaused() const {
    return false;
}

bool UIRRMissionBriefingControlWidget::IsLoadedBriefingActive() const {
    return false;
}

void UIRRMissionBriefingControlWidget::InitMissionBriefingControl(const FIRRMissionBriefing& BriefingData, UIRRAgentSetup* Agent, AActor* SourceActor, bool bAutoPlay) {
}

void UIRRMissionBriefingControlWidget::HandleStopClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void UIRRMissionBriefingControlWidget::HandleSliderValueChanged(float Value) {
}

void UIRRMissionBriefingControlWidget::HandleSliderCaptureEnd() {
}

void UIRRMissionBriefingControlWidget::HandleSliderCaptureBegin() {
}

void UIRRMissionBriefingControlWidget::HandlePlayClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void UIRRMissionBriefingControlWidget::HandleBriefingStarted(FIRRMissionBriefing BriefingData) {
}

void UIRRMissionBriefingControlWidget::HandleBriefingFinished(FIRRMissionBriefing BriefingData) {
}

float UIRRMissionBriefingControlWidget::GetLoadedBriefingPosition() const {
    return 0.0f;
}

float UIRRMissionBriefingControlWidget::GetLoadedBriefingDuration() const {
    return 0.0f;
}

FIRRMissionBriefing UIRRMissionBriefingControlWidget::GetLoadedBriefing() const {
    return FIRRMissionBriefing{};
}

FText UIRRMissionBriefingControlWidget::FormatBriefingTime(float Seconds) {
    return FText::GetEmpty();
}


