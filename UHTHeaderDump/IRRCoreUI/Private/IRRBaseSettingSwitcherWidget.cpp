#include "IRRBaseSettingSwitcherWidget.h"

UIRRBaseSettingSwitcherWidget::UIRRBaseSettingSwitcherWidget() {
    this->HorizontalBox = NULL;
    this->DefaultIndex = 0;
    this->CurrentIndex = -1;
}

void UIRRBaseSettingSwitcherWidget::SetupSwitchers_Implementation() {
}

void UIRRBaseSettingSwitcherWidget::SetSwitcherIndex(int32 Index) {
}

void UIRRBaseSettingSwitcherWidget::SetSwitcherEnabled(int32 Index, bool bEnabled) {
}

void UIRRBaseSettingSwitcherWidget::HandleSwitcherButtonSelected_Implementation(UIRRBaseButtonWidget* ButtonRef) {
}

UIRRBaseButtonWidget* UIRRBaseSettingSwitcherWidget::GetSwitcherRefByIndex(int32 Index) const {
    return NULL;
}

int32 UIRRBaseSettingSwitcherWidget::GetSwitcherIndexByID(FName ID) const {
    return 0;
}

FName UIRRBaseSettingSwitcherWidget::GetSwitcherIDByIndex(int32 Index) const {
    return NAME_None;
}

int32 UIRRBaseSettingSwitcherWidget::GetSwitcherCount() const {
    return 0;
}

int32 UIRRBaseSettingSwitcherWidget::GetActiveSwitcherIndex() const {
    return 0;
}

FName UIRRBaseSettingSwitcherWidget::GetActiveSwitcherID() const {
    return NAME_None;
}


