#include "IRRGunsmithPresetImportWidget.h"

UIRRGunsmithPresetImportWidget::UIRRGunsmithPresetImportWidget() {
    this->bApplyImportedPresets = true;
    this->CodeBox = NULL;
    this->PasteButton = NULL;
}

void UIRRGunsmithPresetImportWidget::PasteFromClipboard() {
}

void UIRRGunsmithPresetImportWidget::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UIRRGunsmithPresetImportWidget::HandleTextChanged(const FText& Text) {
}

void UIRRGunsmithPresetImportWidget::HandlePasteClicked(UIRRBaseButtonWidget* Button) {
}

FContainerItem UIRRGunsmithPresetImportWidget::GetImportedPresetItem() const {
    return FContainerItem{};
}


