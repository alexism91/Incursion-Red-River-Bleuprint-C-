#include "IRRSettingsSaveGame.h"

UIRRSettingsSaveGame::UIRRSettingsSaveGame() {
    this->SchemaVersion = 0;
}

void UIRRSettingsSaveGame::SetValue(FName SettingId, const FIRRSettingValue& Value) {
}

bool UIRRSettingsSaveGame::SaveSettings(UIRRSettingsSaveGame* SaveGame, const UIRRSettingCollection* Collection, bool bAsync) {
    return false;
}

bool UIRRSettingsSaveGame::LoadSettingValue(UObject* WorldContextObject, const UIRRSettingCollection* Collection, FName SettingId, FIRRSettingValue& OutValue) {
    return false;
}

UIRRSettingsSaveGame* UIRRSettingsSaveGame::LoadSettings(const UIRRSettingCollection* Collection) {
    return NULL;
}

bool UIRRSettingsSaveGame::FindValue(FName SettingId, FIRRSettingValue& OutValue) const {
    return false;
}

void UIRRSettingsSaveGame::DeleteSettings(const UIRRSettingCollection* Collection) {
}

void UIRRSettingsSaveGame::ApplySavedSettings(UObject* WorldContextObject, UIRRSettingCollection* Collection) {
}


