#include "IRRItemSplitWidget.h"

UIRRItemSplitWidget::UIRRItemSplitWidget() {
    this->Inventory = NULL;
    this->AmountText = NULL;
    this->MaxAmountText = NULL;
    this->AmountSlider = NULL;
    this->MaxAmountFormat = FText::FromString(TEXT("/ {0}"));
}

void UIRRItemSplitWidget::Split() {
}

void UIRRItemSplitWidget::SetupSplit(UInventoryComponent* InInventory, FContainerItem InItem) {
}

void UIRRItemSplitWidget::SetSplitAmount(int32 NewAmount) {
}

void UIRRItemSplitWidget::HandleSliderChanged(float Value) {
}

void UIRRItemSplitWidget::HandleAmountCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UIRRItemSplitWidget::HandleAmountChanged(const FText& Text) {
}

int32 UIRRItemSplitWidget::GetSplitAmount() const {
    return 0;
}

int32 UIRRItemSplitWidget::GetMaxSplitAmount() const {
    return 0;
}

int32 UIRRItemSplitWidget::GetMaxAmount() const {
    return 0;
}

bool UIRRItemSplitWidget::CanSplit() const {
    return false;
}


