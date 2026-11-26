#include "IRRBaseSettingSelectorWidget.h"

UIRRBaseSettingSelectorWidget::UIRRBaseSettingSelectorWidget() {
    this->LeftArrowButton = NULL;
    this->RightArrowButton = NULL;
    this->CurrentSelectionText = NULL;
    this->bWrapSelection = true;
    this->CurrentIndex = -1;
}

void UIRRBaseSettingSelectorWidget::UpdateArrowButtonsState() {
}

void UIRRBaseSettingSelectorWidget::SetSelectionByIndex(int32 Index) {
}

void UIRRBaseSettingSelectorWidget::SelectPreviousOption() {
}

void UIRRBaseSettingSelectorWidget::SelectNextOption() {
}

void UIRRBaseSettingSelectorWidget::RefreshSelectionText() {
}

void UIRRBaseSettingSelectorWidget::InitFromNames(const TArray<FName>& OptionNames, int32 InitialIndex) {
}

bool UIRRBaseSettingSelectorWidget::HasValidSelection() const {
    return false;
}

void UIRRBaseSettingSelectorWidget::HandleRightArrowClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void UIRRBaseSettingSelectorWidget::HandleLeftArrowClicked(UIRRBaseButtonWidget* ButtonRef) {
}

FName UIRRBaseSettingSelectorWidget::GetCurrentEntry() const {
    return NAME_None;
}


