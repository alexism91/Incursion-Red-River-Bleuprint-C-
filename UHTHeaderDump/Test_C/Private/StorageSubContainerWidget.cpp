#include "StorageSubContainerWidget.h"

UStorageSubContainerWidget::UStorageSubContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InventoryComponent = NULL;
}

UContainerElementWidget* UStorageSubContainerWidget::InitSpatialStorageContainerElement_Implementation(UInventoryComponent* NewInventoryComponent, UBaseContainerWidget* NewContainerRef, FGuid NewMainContainerUID, int32 NewContainerIndex, UInventoryContainerSettings* NewStorageContainer) {
    return NULL;
}


