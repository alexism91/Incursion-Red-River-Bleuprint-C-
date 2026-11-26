#include "IRRAIPresetListEntryWidget.h"

UIRRAIPresetListEntryWidget::UIRRAIPresetListEntryWidget() {
    this->NameText = NULL;
    this->DescriptionText = NULL;
    this->TimestampText = NULL;
    this->DeleteButton = NULL;
    this->Item = NULL;
    this->bConfirmDelete = true;
}

bool UIRRAIPresetListEntryWidget::RequestDelete() {
    return false;
}




bool UIRRAIPresetListEntryWidget::IsDeleteArmed() const {
    return false;
}

void UIRRAIPresetListEntryWidget::HandleDeleteClicked(UIRRBaseButtonWidget* Button) {
}

FText UIRRAIPresetListEntryWidget::GetTimestampText() const {
    return FText::GetEmpty();
}

bool UIRRAIPresetListEntryWidget::CanDelete() const {
    return false;
}


