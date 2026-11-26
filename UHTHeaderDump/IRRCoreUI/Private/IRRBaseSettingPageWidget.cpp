#include "IRRBaseSettingPageWidget.h"

UIRRBaseSettingPageWidget::UIRRBaseSettingPageWidget() {
    this->SettingCollection = NULL;
    this->DefaultRowClass = NULL;
    this->SectionHeaderClass = NULL;
    this->SectionSpacing = 16.00f;
    this->ApplyMode = EIRRSettingApplyMode::Immediate;
    this->bDiscardPendingOnClose = true;
    this->bUnpauseWhileApplying = false;
    this->UnpauseDuration = 0.25f;
    this->bPreviewInDesigner = true;
    this->SettingsContainer = NULL;
    this->Model = NULL;
}

bool UIRRBaseSettingPageWidget::SetSettingValue(FName SettingId, FIRRSettingValue Value) {
    return false;
}

void UIRRBaseSettingPageWidget::SetRestartRequired(FName Key, bool bRequired) {
}

void UIRRBaseSettingPageWidget::SetHasUnappliedChanges(bool bUnapplied) {
}

bool UIRRBaseSettingPageWidget::SaveSettings() {
    return false;
}

bool UIRRBaseSettingPageWidget::SavePreset(const FText& DisplayName, FName& OutPresetId) {
    return false;
}

void UIRRBaseSettingPageWidget::RestartGame() {
}

void UIRRBaseSettingPageWidget::ResetToDefaults() {
}

void UIRRBaseSettingPageWidget::ResetSettingToDefault(FName SettingId) {
}

void UIRRBaseSettingPageWidget::ResetSection(FName SectionId) {
}

void UIRRBaseSettingPageWidget::ResetContainer(FName ContainerName) {
}

void UIRRBaseSettingPageWidget::RefreshEngineValues() {
}

void UIRRBaseSettingPageWidget::OnSettingBarHovered_Implementation(bool bHovered, UIRRBaseSettingBarWidget* BarWidget) {
}

bool UIRRBaseSettingPageWidget::LoadPreset(FName PresetId) {
    return false;
}




bool UIRRBaseSettingPageWidget::IsSettingAwaitingRestart(FName SettingId) const {
    return false;
}

bool UIRRBaseSettingPageWidget::IsSettingAtDefault(FName SettingId) const {
    return false;
}

bool UIRRBaseSettingPageWidget::IsRestartRequired() const {
    return false;
}

void UIRRBaseSettingPageWidget::InitializeSectionHeader_Implementation(UUserWidget* HeaderWidget, const FIRRSettingSection& Section) {
}

bool UIRRBaseSettingPageWidget::ImportPreset(const FString& Code, FName& OutPresetId, FText& OutMessage) {
    return false;
}

bool UIRRBaseSettingPageWidget::HasSettingsToReset(FName ContainerName) const {
    return false;
}

bool UIRRBaseSettingPageWidget::HasPresets() const {
    return false;
}

bool UIRRBaseSettingPageWidget::HasPendingChanges() const {
    return false;
}

void UIRRBaseSettingPageWidget::HandleModelValueChanged(FName SettingId, const FIRRSettingValue& Value) {
}

void UIRRBaseSettingPageWidget::HandleModelPresetsChanged() {
}

void UIRRBaseSettingPageWidget::HandleModelPendingChanged(bool bHasPendingChanges) {
}

void UIRRBaseSettingPageWidget::HandleModelHandlersApplied() {
}

void UIRRBaseSettingPageWidget::HandleModelEditStateChanged(FName SettingId, const FIRRSettingEditState& State) {
}

void UIRRBaseSettingPageWidget::HandleModelDefinitionChanged(FName SettingId) {
}

void UIRRBaseSettingPageWidget::HandleBarValueCommitted(UIRRBaseSettingBarWidget* BarWidget, const FIRRSettingValue& Value) {
}

void UIRRBaseSettingPageWidget::HandleBarResetRequested(UIRRBaseSettingBarWidget* BarWidget) {
}

bool UIRRBaseSettingPageWidget::GetSettingValue(FName SettingId, FIRRSettingValue& OutValue) const {
    return false;
}

bool UIRRBaseSettingPageWidget::GetSettingEditState(FName SettingId, FIRRSettingEditState& OutState) const {
    return false;
}

TArray<UIRRBaseSettingBarWidget*> UIRRBaseSettingPageWidget::GetSettingBarWidgets_Implementation() {
    return TArray<UIRRBaseSettingBarWidget*>();
}

UIRRBaseSettingBarWidget* UIRRBaseSettingPageWidget::GetSettingBar(FName SettingId) const {
    return NULL;
}

UPanelWidget* UIRRBaseSettingPageWidget::GetSectionContainer_Implementation(FName ContainerName) {
    return NULL;
}

bool UIRRBaseSettingPageWidget::GetRuntimeSettingDefinition(FName SettingId, FIRRSettingDefinition& OutDefinition) const {
    return false;
}

FText UIRRBaseSettingPageWidget::GetResetWarning(FName ContainerName) const {
    return FText::GetEmpty();
}

TArray<FIRRSettingPreset> UIRRBaseSettingPageWidget::GetPresets() const {
    return TArray<FIRRSettingPreset>();
}

TArray<FName> UIRRBaseSettingPageWidget::GetPendingSettingIds() const {
    return TArray<FName>();
}

UIRRSettingCollectionModel* UIRRBaseSettingPageWidget::GetModel() const {
    return NULL;
}

FString UIRRBaseSettingPageWidget::ExportPreset(FName PresetId) const {
    return TEXT("");
}

void UIRRBaseSettingPageWidget::EvaluateConditions() {
}

void UIRRBaseSettingPageWidget::DiscardChanges() {
}

bool UIRRBaseSettingPageWidget::DeletePreset(FName PresetId) {
    return false;
}

void UIRRBaseSettingPageWidget::BuildSettings() {
}

void UIRRBaseSettingPageWidget::ApplyChanges() {
}


