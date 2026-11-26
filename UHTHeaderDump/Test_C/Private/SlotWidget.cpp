#include "SlotWidget.h"

USlotWidget::USlotWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BaseContainerElement = NULL;
    this->SlotIndex = 0;
    this->bEquipToSlot = false;
}


