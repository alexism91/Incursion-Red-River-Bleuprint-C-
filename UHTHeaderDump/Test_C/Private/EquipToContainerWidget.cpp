#include "EquipToContainerWidget.h"

UEquipToContainerWidget::UEquipToContainerWidget() {
    this->bUseHeadline = false;
    this->bCheckOnDragStart = true;
    this->bAddItemContainer = false;
    this->bIsRotated = false;
    this->BackgroundImage = NULL;
}

void UEquipToContainerWidget::OnItemDragged(FContainerItem DraggedItem, bool bStart) {
}



