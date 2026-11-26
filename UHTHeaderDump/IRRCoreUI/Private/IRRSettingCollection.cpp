#include "IRRSettingCollection.h"

UIRRSettingCollection::UIRRSettingCollection() {
    this->Storage = EIRRSettingStorage::Shared;
    this->SchemaVersion = 1;
    this->PresetProvider = NULL;
}

bool UIRRSettingCollection::SanitizeValue(const FIRRSettingDefinition& Definition, FIRRSettingValue& Value) {
    return false;
}

FIRRSettingValue UIRRSettingCollection::ResolveValue(const FIRRSettingDefinition& Definition, const UIRRSettingsSaveGame* SaveGame) {
    return FIRRSettingValue{};
}

bool UIRRSettingCollection::RequiresRestart(const FIRRSettingDefinition& Definition, const FIRRSettingValue& RunningValue, const FIRRSettingValue& NewValue) {
    return false;
}

bool UIRRSettingCollection::MakeOptionValueByIndex(const FIRRSettingDefinition& Definition, int32 OptionIndex, FIRRSettingValue& OutValue) {
    return false;
}

bool UIRRSettingCollection::MakeOptionValueById(const FIRRSettingDefinition& Definition, FName OptionId, FIRRSettingValue& OutValue) {
    return false;
}

FIRRSettingValue UIRRSettingCollection::MakeDefaultValue(const FIRRSettingDefinition& Definition) {
    return FIRRSettingValue{};
}

TArray<FIRRSettingDefinition> UIRRSettingCollection::K2_GetAllSettings() const {
    return TArray<FIRRSettingDefinition>();
}

TArray<FString> UIRRSettingCollection::GetSettingIdOptions() const {
    return TArray<FString>();
}

bool UIRRSettingCollection::GetSettingDefinition(FName SettingId, FIRRSettingDefinition& OutDefinition) const {
    return false;
}

FString UIRRSettingCollection::GetSaveSlotName() const {
    return TEXT("");
}

TArray<FString> UIRRSettingCollection::GetContainerNameOptions() const {
    return TArray<FString>();
}


