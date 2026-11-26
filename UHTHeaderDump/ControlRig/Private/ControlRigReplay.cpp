#include "ControlRigReplay.h"

UControlRigReplay::UControlRigReplay() {
    this->Tolerance = 0.00f;
    this->bValidateHierarchyTopology = true;
    this->bValidatePose = true;
    this->bValidateMetadata = true;
    this->bValidateVariables = true;
    this->EnableTest = true;
}

bool UControlRigReplay::StopReplay() {
    return false;
}

bool UControlRigReplay::StopRecording() {
    return false;
}

bool UControlRigReplay::StartReplay(UControlRig* InControlRig, EControlRigReplayPlaybackMode InMode) {
    return false;
}

bool UControlRigReplay::StartRecording(UControlRig* InControlRig) {
    return false;
}

void UControlRigReplay::SetPlaybackMode(EControlRigReplayPlaybackMode InMode) {
}

bool UControlRigReplay::PauseReplay() {
    return false;
}

bool UControlRigReplay::IsReplaying() const {
    return false;
}

bool UControlRigReplay::IsRecording() const {
    return false;
}

bool UControlRigReplay::IsPaused() const {
    return false;
}

FVector2D UControlRigReplay::GetTimeRange() const {
    return FVector2D{};
}

EControlRigReplayPlaybackMode UControlRigReplay::GetPlaybackMode() const {
    return EControlRigReplayPlaybackMode::Live;
}

UControlRigReplay* UControlRigReplay::CreateNewAsset(const FString& InDesiredPackagePath, const FString& InBlueprintPathName, UClass* InAssetClass) {
    return NULL;
}


