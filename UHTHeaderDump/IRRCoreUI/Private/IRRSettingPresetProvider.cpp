#include "IRRSettingPresetProvider.h"

UIRRSettingPresetProvider::UIRRSettingPresetProvider() {
}

bool UIRRSettingPresetProvider::SavePreset_Implementation(UIRRSettingCollectionModel* Model, const FText& DisplayName, FName& OutPresetId) {
    return false;
}

bool UIRRSettingPresetProvider::ResetPresetData_Implementation(UIRRSettingCollectionModel* Model, const TArray<FName>& SettingIds) {
    return false;
}

FName UIRRSettingPresetProvider::MakePresetId(const FText& DisplayName, const TArray<FName>& TakenIds) {
    return NAME_None;
}

bool UIRRSettingPresetProvider::LoadPreset_Implementation(UIRRSettingCollectionModel* Model, FName PresetId, bool bDefer) {
    return false;
}

bool UIRRSettingPresetProvider::ImportPreset_Implementation(UIRRSettingCollectionModel* Model, const FString& Code, FName& OutPresetId, FText& OutMessage) {
    return false;
}

bool UIRRSettingPresetProvider::HasPresetDataToReset_Implementation(UIRRSettingCollectionModel* Model, const TArray<FName>& SettingIds) const {
    return false;
}

FText UIRRSettingPresetProvider::GetResetWarning_Implementation(UIRRSettingCollectionModel* Model, const TArray<FName>& SettingIds) const {
    return FText::GetEmpty();
}

void UIRRSettingPresetProvider::GetPresets_Implementation(UIRRSettingCollectionModel* Model, TArray<FIRRSettingPreset>& OutPresets) const {
}

FString UIRRSettingPresetProvider::ExportPreset_Implementation(UIRRSettingCollectionModel* Model, FName PresetId) const {
    return TEXT("");
}

bool UIRRSettingPresetProvider::DeletePreset_Implementation(UIRRSettingCollectionModel* Model, FName PresetId) {
    return false;
}


