#include "IRRGunsmithPresetExportWidget.h"

UIRRGunsmithPresetExportWidget::UIRRGunsmithPresetExportWidget() {
    this->MaxNameLength = 64;
    this->NameBox = NULL;
    this->CopyButton = NULL;
}

void UIRRGunsmithPresetExportWidget::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UIRRGunsmithPresetExportWidget::HandleTextChanged(const FText& Text) {
}

void UIRRGunsmithPresetExportWidget::HandleCopyClicked(UIRRBaseButtonWidget* Button) {
}

bool UIRRGunsmithPresetExportWidget::CopyToClipboard(FText& OutMessage) {
    return false;
}


