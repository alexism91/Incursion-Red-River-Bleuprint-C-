#include "IRRVicinityWidget.h"

UIRRVicinityWidget::UIRRVicinityWidget() {
    this->ContainerElementClass = NULL;
    this->VicinityElementHost = NULL;
    this->VicinityElement = NULL;
}


void UIRRVicinityWidget::HandleLayoutChanged(int32 Columns, int32 Rows) {
}

UIRRVicinityInventoryComponent* UIRRVicinityWidget::GetVicinityInventory() const {
    return NULL;
}

UContainerElementWidget* UIRRVicinityWidget::GetVicinityElement() const {
    return NULL;
}


