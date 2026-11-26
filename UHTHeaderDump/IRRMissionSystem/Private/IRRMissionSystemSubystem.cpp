#include "IRRMissionSystemSubystem.h"

UIRRMissionSystemSubystem::UIRRMissionSystemSubystem() {
    this->bIsMissionBriefingPlaying = false;
    this->CurrentAgent = NULL;
    this->CurrentSourceActor = NULL;
    this->CurrentPlayingEventID = 0;
    this->CurrentAkComponent = NULL;
}

void UIRRMissionSystemSubystem::StopMissionBriefing() {
}

bool UIRRMissionSystemSubystem::SkipMissionBriefing() {
    return false;
}

bool UIRRMissionSystemSubystem::SeekMissionBriefing(float Progress) {
    return false;
}

bool UIRRMissionSystemSubystem::ResumeMissionBriefing() {
    return false;
}

void UIRRMissionSystemSubystem::ReplayMissionBriefing() {
}

void UIRRMissionSystemSubystem::RemoveBriefingHold(UObject* Holder) {
}

void UIRRMissionSystemSubystem::PlayMissionBriefing(const FIRRMissionBriefing& BriefingData, UIRRAgentSetup* Agent, AActor* SourceActor, bool bForce) {
}

bool UIRRMissionSystemSubystem::PauseMissionBriefing() {
    return false;
}

void UIRRMissionSystemSubystem::OnAudioEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

bool UIRRMissionSystemSubystem::IsMissionBriefingPlaying() const {
    return false;
}

bool UIRRMissionSystemSubystem::IsMissionBriefingPaused() const {
    return false;
}

bool UIRRMissionSystemSubystem::IsMissionBriefingBusy() const {
    return false;
}

bool UIRRMissionSystemSubystem::IsBriefingHeld() {
    return false;
}

bool UIRRMissionSystemSubystem::InterruptMissionBriefing(bool bOnlyIfInterruptible) {
    return false;
}

float UIRRMissionSystemSubystem::GetMissionBriefingRemainingTime() const {
    return 0.0f;
}

float UIRRMissionSystemSubystem::GetMissionBriefingProgress() const {
    return 0.0f;
}

float UIRRMissionSystemSubystem::GetMissionBriefingPosition() const {
    return 0.0f;
}

float UIRRMissionSystemSubystem::GetMissionBriefingDuration() const {
    return 0.0f;
}

FIRRMissionBriefing UIRRMissionSystemSubystem::GetCurrentMissionBriefingData() const {
    return FIRRMissionBriefing{};
}

UIRRAgentSetup* UIRRMissionSystemSubystem::GetCurrentMissionBriefingAgent() const {
    return NULL;
}

bool UIRRMissionSystemSubystem::CanPlayMissionBriefing(const FIRRMissionBriefing& BriefingData, bool bForce) const {
    return false;
}

void UIRRMissionSystemSubystem::AddBriefingHold(UObject* Holder) {
}


