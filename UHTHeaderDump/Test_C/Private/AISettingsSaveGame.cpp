#include "AISettingsSaveGame.h"

UAISettingsSaveGame::UAISettingsSaveGame() {
    this->AISimulationLevel = EAISimulationLevel::NORMAL;
    this->bCustomSimSettingsSet = false;
    this->AIDifficulty = EAIDifficulty::MID;
    this->bCustomSettingsSet = false;
}


