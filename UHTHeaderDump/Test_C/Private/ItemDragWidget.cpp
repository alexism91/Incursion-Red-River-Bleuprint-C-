#include "ItemDragWidget.h"

UItemDragWidget::UItemDragWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemImage = NULL;
    this->ItemImageScale = 0.00f;
    this->ItemDragDropOperation = NULL;
}


