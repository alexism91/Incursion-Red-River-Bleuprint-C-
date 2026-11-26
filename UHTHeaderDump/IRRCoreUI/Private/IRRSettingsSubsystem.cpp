#include "IRRSettingsSubsystem.h"

UIRRSettingsSubsystem::UIRRSettingsSubsystem() {
}

bool UIRRSettingsSubsystem::SetSettingValue(FName CollectionId, FName SettingId, FIRRSettingValue Value) {
    return false;
}

void UIRRSettingsSubsystem::SetRestartRequired(FName Key, bool bRequired) {
}

void UIRRSettingsSubsystem::RestartGame() {
}

bool UIRRSettingsSubsystem::RegisterCollection(UIRRSettingCollection* Collection) {
    return false;
}

bool UIRRSettingsSubsystem::IsSettingOn(FName CollectionId, FName SettingId) const {
    return false;
}

bool UIRRSettingsSubsystem::IsSettingAwaitingRestart(FName CollectionId, FName SettingId) const {
    return false;
}

bool UIRRSettingsSubsystem::IsRestartRequired(FName CollectionId) const {
    return false;
}

bool UIRRSettingsSubsystem::IsRestartMarked(FName Key) const {
    return false;
}

bool UIRRSettingsSubsystem::GetSettingValue(FName CollectionId, FName SettingId, FIRRSettingValue& OutValue) const {
    return false;
}

TArray<FName> UIRRSettingsSubsystem::GetSettingsAwaitingRestart(FName CollectionId) const {
    return TArray<FName>();
}

FName UIRRSettingsSubsystem::GetSettingOptionId(FName CollectionId, FName SettingId) const {
    return NAME_None;
}

float UIRRSettingsSubsystem::GetSettingNumber(FName CollectionId, FName SettingId, float Fallback) const {
    return 0.0f;
}

bool UIRRSettingsSubsystem::GetSettingDefinition(FName CollectionId, FName SettingId, FIRRSettingDefinition& OutDefinition) const {
    return false;
}

UIRRSettingCollectionModel* UIRRSettingsSubsystem::GetOrCreateModel(UIRRSettingCollection* Collection) {
    return NULL;
}

UIRRSettingCollectionModel* UIRRSettingsSubsystem::GetModel(FName CollectionId) const {
    return NULL;
}

UIRRSettingCollection* UIRRSettingsSubsystem::GetCollection(FName CollectionId) const {
    return NULL;
}

void UIRRSettingsSubsystem::ApplySettings(const TArray<UIRRSettingCollection*>& Collections) {
}


