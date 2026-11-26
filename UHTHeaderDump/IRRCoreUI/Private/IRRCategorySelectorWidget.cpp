#include "IRRCategorySelectorWidget.h"

UIRRCategorySelectorWidget::UIRRCategorySelectorWidget() {
    this->bAllowNone = true;
    this->MaxDepth = 0;
    this->NoneLabel = FText::FromString(TEXT("Aucun"));
    this->AnyLabel = FText::FromString(TEXT("Tous"));
    this->Spacing = 4.00f;
    this->DropdownWidth = 0.00f;
}

bool UIRRCategorySelectorWidget::SetSelectedCategory(FGameplayTag Category) {
    return false;
}

void UIRRCategorySelectorWidget::RefreshOptions() {
}

TArray<FGameplayTag> UIRRCategorySelectorWidget::GetSelectedPath() const {
    return TArray<FGameplayTag>();
}

bool UIRRCategorySelectorWidget::GetSelectedCategory(FGameplayTag& OutCategory) const {
    return false;
}

void UIRRCategorySelectorWidget::ClearSelection() {
}


