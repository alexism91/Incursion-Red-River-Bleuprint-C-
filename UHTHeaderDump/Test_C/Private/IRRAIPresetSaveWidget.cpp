#include "IRRAIPresetSaveWidget.h"

UIRRAIPresetSaveWidget::UIRRAIPresetSaveWidget() {
    this->bAcceptShareCodes = true;
    this->bApplyImportedPresets = true;
    this->ImportIntoVariantId = TEXT("Custom");
    this->bAllowOverwrite = true;
    this->MaxNameLength = 64;
    this->bPrefillName = false;
    this->NameBox = NULL;
}

bool UIRRAIPresetSaveWidget::WouldOverwrite() const {
    return false;
}

bool UIRRAIPresetSaveWidget::IsShareCode() const {
    return false;
}

void UIRRAIPresetSaveWidget::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UIRRAIPresetSaveWidget::HandleTextChanged(const FText& Text) {
}

FName UIRRAIPresetSaveWidget::GetPresetIdForName() const {
    return NAME_None;
}


