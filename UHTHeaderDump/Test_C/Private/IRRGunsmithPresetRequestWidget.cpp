#include "IRRGunsmithPresetRequestWidget.h"

UIRRGunsmithPresetRequestWidget::UIRRGunsmithPresetRequestWidget() {
    this->ReasonText = NULL;
}

bool UIRRGunsmithPresetRequestWidget::TryAccept(FText& OutReason) {
    return false;
}

void UIRRGunsmithPresetRequestWidget::SetGunsmith(UInventoryComponent_Gunsmith* InGunsmith) {
}

void UIRRGunsmithPresetRequestWidget::Refresh() {
}

void UIRRGunsmithPresetRequestWidget::NotifyAcceptStateChanged() {
}


UInventoryComponent_Gunsmith* UIRRGunsmithPresetRequestWidget::GetGunsmith() const {
    return NULL;
}

void UIRRGunsmithPresetRequestWidget::Cancel() {
}

bool UIRRGunsmithPresetRequestWidget::CanAccept(FText& OutReason) const {
    return false;
}


