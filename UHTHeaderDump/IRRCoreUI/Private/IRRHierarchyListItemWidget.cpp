#include "IRRHierarchyListItemWidget.h"

UIRRHierarchyListItemWidget::UIRRHierarchyListItemWidget() {
    this->HierarchyListManager = NULL;
    this->TreeIndex = 0;
    this->HierarchyIndex = 0;
}

void UIRRHierarchyListItemWidget::UpdateIndex_Implementation(int32 NewHierarchyIndex) {
}

void UIRRHierarchyListItemWidget::InitItem_Implementation(int32 NewHierarchyIndex) {
}

TArray<UIRRHierarchyListItemWidget*> UIRRHierarchyListItemWidget::GetChildItems_Implementation() {
    return TArray<UIRRHierarchyListItemWidget*>();
}


