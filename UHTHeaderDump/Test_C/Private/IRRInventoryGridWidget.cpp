#include "IRRInventoryGridWidget.h"

UIRRInventoryGridWidget::UIRRInventoryGridWidget() {
    this->Columns = 4;
    this->Rows = 4;
    this->HighlightInset = 1.00f;
}

void UIRRInventoryGridWidget::SetSlotEnabled(int32 SlotIndex, bool bEnabled) {
}

void UIRRInventoryGridWidget::SetHighlightedSlots(const TArray<int32>& SlotIndexes, bool bValid) {
}

void UIRRInventoryGridWidget::SetGridSize(int32 NewColumns, int32 NewRows) {
}

int32 UIRRInventoryGridWidget::GetRows() const {
    return 0;
}

int32 UIRRInventoryGridWidget::GetColumns() const {
    return 0;
}

void UIRRInventoryGridWidget::ClearHighlights() {
}


