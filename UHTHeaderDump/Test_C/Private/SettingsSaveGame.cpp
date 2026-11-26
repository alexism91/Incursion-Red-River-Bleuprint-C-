#include "SettingsSaveGame.h"

USettingsSaveGame::USettingsSaveGame() {
    this->bShowedPatchNotes = false;
    this->bConfirmedAIDifficulty = false;
}

USettingsSaveGame* USettingsSaveGame::CreateDefaultSettingsSave() {
    return NULL;
}

void USettingsSaveGame::CreateDefaultSaveGame_Implementation() {
}


