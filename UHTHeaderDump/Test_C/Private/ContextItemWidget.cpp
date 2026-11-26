#include "ContextItemWidget.h"

UContextItemWidget::UContextItemWidget() {
    this->ParentRef = NULL;
    this->ItemRef = NULL;
    this->ContextRef = NULL;
}

void UContextItemWidget::InitItemContext_Implementation(UUserWidget* NewParentRef, UItemWidget* NewItemRef, UItemContext* NewContextRef) {
}


