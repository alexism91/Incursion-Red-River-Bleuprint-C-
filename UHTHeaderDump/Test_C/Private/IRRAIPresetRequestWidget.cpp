#include "IRRAIPresetRequestWidget.h"

UIRRAIPresetRequestWidget::UIRRAIPresetRequestWidget() {
    this->ReasonText = NULL;
}

bool UIRRAIPresetRequestWidget::TryAccept(FText& OutReason) {
    return false;
}

void UIRRAIPresetRequestWidget::Refresh() {
}

void UIRRAIPresetRequestWidget::NotifyAcceptStateChanged() {
}


void UIRRAIPresetRequestWidget::Cancel() {
}

bool UIRRAIPresetRequestWidget::CanAccept(FText& OutReason) const {
    return false;
}


