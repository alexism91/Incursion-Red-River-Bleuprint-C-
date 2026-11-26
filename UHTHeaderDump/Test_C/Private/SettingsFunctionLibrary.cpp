#include "SettingsFunctionLibrary.h"

USettingsFunctionLibrary::USettingsFunctionLibrary() {
}

bool USettingsFunctionLibrary::SetAutoLowReadyOnIdleEnabled(UObject* WorldContextObject, bool bEnabled) {
    return false;
}

bool USettingsFunctionLibrary::SaveMainSettingsSaveFile(USettingsSaveGame* SaveGame) {
    return false;
}

FString USettingsFunctionLibrary::GetSettingsFileName() {
    return TEXT("");
}

bool USettingsFunctionLibrary::DoesSettingsSaveFileExist() {
    return false;
}

bool USettingsFunctionLibrary::ApplyGameplaySettings(UObject* WorldContextObject, const FIRRGameplaySettings& Settings) {
    return false;
}


