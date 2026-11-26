#include "ContextMenuWidget.h"

UContextMenuWidget::UContextMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemRef = NULL;
    this->bMouseEntered = true;
    this->ContextButtonClass = NULL;
    this->ContextMenuBox = NULL;
}

void UContextMenuWidget::RebuildContextButtons() {
}


