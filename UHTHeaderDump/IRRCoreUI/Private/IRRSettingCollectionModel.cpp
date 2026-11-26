#include "IRRSettingCollectionModel.h"

UIRRSettingCollectionModel::UIRRSettingCollectionModel() {
    this->Collection = NULL;
    this->SaveGame = NULL;
}

bool UIRRSettingCollectionModel::SetSettingValue(FName SettingId, FIRRSettingValue Value, bool bDefer, bool bFromPlayer) {
    return false;
}

bool UIRRSettingCollectionModel::SavePreset(const FText& DisplayName, FName& OutPresetId) {
    return false;
}

void UIRRSettingCollectionModel::SaveNow(bool bAsync) {
}

void UIRRSettingCollectionModel::ResetToDefaults(bool bDefer) {
}

void UIRRSettingCollectionModel::ResetSettingToDefault(FName SettingId, bool bDefer) {
}

void UIRRSettingCollectionModel::ResetSection(FName SectionId, bool bDefer) {
}

void UIRRSettingCollectionModel::ResetContainer(FName ContainerName, bool bDefer) {
}

void UIRRSettingCollectionModel::RefreshEngineValues() {
}

bool UIRRSettingCollectionModel::LoadPreset(FName PresetId, bool bDefer) {
    return false;
}

bool UIRRSettingCollectionModel::IsSettingAwaitingRestart(FName SettingId) const {
    return false;
}

bool UIRRSettingCollectionModel::IsSettingAtDefault(FName SettingId) const {
    return false;
}

bool UIRRSettingCollectionModel::IsRestartRequired() const {
    return false;
}

bool UIRRSettingCollectionModel::IsPreview() const {
    return false;
}

bool UIRRSettingCollectionModel::ImportPreset(const FString& Code, FName& OutPresetId, FText& OutMessage) {
    return false;
}

bool UIRRSettingCollectionModel::HasSettingsToReset(FName ContainerName) const {
    return false;
}

bool UIRRSettingCollectionModel::HasPresetProvider() const {
    return false;
}

bool UIRRSettingCollectionModel::HasPendingChanges() const {
    return false;
}

bool UIRRSettingCollectionModel::GetSettingValue(FName SettingId, FIRRSettingValue& OutValue) const {
    return false;
}

TArray<FName> UIRRSettingCollectionModel::GetSettingsAwaitingRestart() const {
    return TArray<FName>();
}

bool UIRRSettingCollectionModel::GetSettingEditState(FName SettingId, FIRRSettingEditState& OutState) const {
    return false;
}

bool UIRRSettingCollectionModel::GetSettingDefinition(FName SettingId, FIRRSettingDefinition& OutDefinition) const {
    return false;
}

bool UIRRSettingCollectionModel::GetRunningValue(FName SettingId, FIRRSettingValue& OutValue) const {
    return false;
}

FText UIRRSettingCollectionModel::GetResetWarning(FName ContainerName) const {
    return FText::GetEmpty();
}

TArray<FIRRSettingPreset> UIRRSettingCollectionModel::GetPresets() const {
    return TArray<FIRRSettingPreset>();
}

bool UIRRSettingCollectionModel::GetPlayerValue(FName SettingId, FIRRSettingValue& OutValue) const {
    return false;
}

TArray<FName> UIRRSettingCollectionModel::GetPendingSettingIds() const {
    return TArray<FName>();
}

UIRRSettingCollection* UIRRSettingCollectionModel::GetCollection() const {
    return NULL;
}

FString UIRRSettingCollectionModel::ExportPreset(FName PresetId) const {
    return TEXT("");
}

void UIRRSettingCollectionModel::EvaluateConditions() {
}

void UIRRSettingCollectionModel::DiscardChanges() {
}

bool UIRRSettingCollectionModel::DeletePreset(FName PresetId) {
    return false;
}

void UIRRSettingCollectionModel::ApplyValues(const TMap<FName, FIRRSettingValue>& Values, bool bDefer) {
}

void UIRRSettingCollectionModel::ApplyChanges() {
}


