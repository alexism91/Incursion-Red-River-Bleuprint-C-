#include "IRRMissionSaveGame.h"

UIRRMissionSaveGame::UIRRMissionSaveGame() {
    this->bInitiated = false;
}

void UIRRMissionSaveGame::SetProgressData(const FIRRProgressData NewProgressData) {
}

void UIRRMissionSaveGame::SetMissionData(TArray<UIRRMissionData*> NewMissionData) {
}

FIRRProgressData UIRRMissionSaveGame::GetProgressData() {
    return FIRRProgressData{};
}

TArray<FIRRMissionSaveData> UIRRMissionSaveGame::GetMissionData() {
    return TArray<FIRRMissionSaveData>();
}


