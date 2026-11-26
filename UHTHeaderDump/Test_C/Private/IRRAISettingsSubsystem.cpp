#include "IRRAISettingsSubsystem.h"

UIRRAISettingsSubsystem::UIRRAISettingsSubsystem() {
}

void UIRRAISettingsSubsystem::ToggleSettingsMenu() {
}

FName UIRRAISettingsSubsystem::SuggestNewVariantId(FName CategoryId, FName SourceVariantId) const {
    return NAME_None;
}

bool UIRRAISettingsSubsystem::SetCategoryValue(FName CategoryId, const FInstancedStruct& Value) {
    return false;
}

void UIRRAISettingsSubsystem::SetAuthoringMode(bool bEnabled) {
}

bool UIRRAISettingsSubsystem::SetActiveVariantForCategory(FName CategoryId, FName VariantId) {
    return false;
}

bool UIRRAISettingsSubsystem::SetActivePreset(FName PresetId) {
    return false;
}

void UIRRAISettingsSubsystem::ScanVariants() {
}

void UIRRAISettingsSubsystem::ScanPresets() {
}

bool UIRRAISettingsSubsystem::SaveSelectionAsPreset(FName NewPresetId, FText DisplayName, FText Description) {
    return false;
}

bool UIRRAISettingsSubsystem::RenameVariant(FName CategoryId, FName VariantId, FName NewVariantId) {
    return false;
}

void UIRRAISettingsSubsystem::RegisterPresetSearchPath(const FString& Directory, EIRRAIPresetSource Source) {
}

bool UIRRAISettingsSubsystem::OverwriteVariantFrom(FName CategoryId, FName TargetVariantId, FName SourceVariantId) {
    return false;
}

void UIRRAISettingsSubsystem::OpenSettingsMenu() {
}

bool UIRRAISettingsSubsystem::LoadPresetIntoVariant(FName PresetId, FName TargetVariantId) {
    return false;
}

bool UIRRAISettingsSubsystem::IsVariantUnsaved(FName CategoryId, FName VariantId) const {
    return false;
}

bool UIRRAISettingsSubsystem::IsVariantUnedited(FName CategoryId, FName VariantId) const {
    return false;
}

bool UIRRAISettingsSubsystem::IsReservedPresetId(FName PresetId) const {
    return false;
}

bool UIRRAISettingsSubsystem::IsReservedDifficultyName(const FString& Name) {
    return false;
}

bool UIRRAISettingsSubsystem::IsOnBaseLayer() const {
    return false;
}

bool UIRRAISettingsSubsystem::IsAuthoringMode() const {
    return false;
}

bool UIRRAISettingsSubsystem::ImportShareCode(const FString& Code, FText& OutMessage) {
    return false;
}

bool UIRRAISettingsSubsystem::ImportAndApplyShareCode(const FString& Code, FText& OutMessage, FName LoadIntoVariantId) {
    return false;
}

TArray<FIRRSettingsVariantInfo> UIRRAISettingsSubsystem::GetVariantsForCategory(FName CategoryId) const {
    return TArray<FIRRSettingsVariantInfo>();
}

FName UIRRAISettingsSubsystem::GetSelectedVariantForCategory(FName CategoryId) const {
    return NAME_None;
}

FText UIRRAISettingsSubsystem::GetSelectedVariantDisplayName(FName CategoryId) const {
    return FText::GetEmpty();
}

TArray<FIRRAIPresetMetadata> UIRRAISettingsSubsystem::GetPresets() const {
    return TArray<FIRRAIPresetMetadata>();
}

FName UIRRAISettingsSubsystem::GetMatchingPresetId() const {
    return NAME_None;
}

FString UIRRAISettingsSubsystem::GetClipboardText() {
    return TEXT("");
}

TArray<FIRRSettingsChangeLogEntry> UIRRAISettingsSubsystem::GetChangeLogEntries(int32 MaxEntries) const {
    return TArray<FIRRSettingsChangeLogEntry>();
}

FInstancedStruct UIRRAISettingsSubsystem::GetCategoryValue(FName CategoryId) const {
    return FInstancedStruct{};
}

TArray<FIRRSettingsCategorySpec> UIRRAISettingsSubsystem::GetCategories() const {
    return TArray<FIRRSettingsCategorySpec>();
}

FText UIRRAISettingsSubsystem::GetBuiltInVariantDisplayName(FName CategoryId, FName VariantId) {
    return FText::GetEmpty();
}

FString UIRRAISettingsSubsystem::ExportVariantCode(FName CategoryId, FName VariantId) const {
    return TEXT("");
}

FString UIRRAISettingsSubsystem::ExportPresetCode(FName PresetId) const {
    return TEXT("");
}

bool UIRRAISettingsSubsystem::DuplicateVariant(FName CategoryId, FName SourceVariantId, FName NewVariantId) {
    return false;
}

bool UIRRAISettingsSubsystem::DeleteVariant(FName CategoryId, FName VariantId) {
    return false;
}

bool UIRRAISettingsSubsystem::DeleteLocalPreset(FName PresetId) {
    return false;
}

bool UIRRAISettingsSubsystem::CopyVariantCodeToClipboard(FName CategoryId, FName VariantId) const {
    return false;
}

bool UIRRAISettingsSubsystem::CopyPresetCodeToClipboard(FName PresetId) const {
    return false;
}

void UIRRAISettingsSubsystem::CloseSettingsMenu() {
}

void UIRRAISettingsSubsystem::ClearChangeLog() {
}

void UIRRAISettingsSubsystem::ApplyToWorld() {
}


