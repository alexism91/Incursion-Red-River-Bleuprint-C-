#include "InventoryWidget.h"

UInventoryWidget::UInventoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InventoryComponent = NULL;
}

void UInventoryWidget::OnStorageContainerUpdated(FMainContainer MainContainer, int32 ContainerIndex) {
}

void UInventoryWidget::OnItemRemoved(FMainContainer MainContainer, FContainerItem Item) {
}

void UInventoryWidget::OnItemAdded(FMainContainer MainContainer, FContainerItem Item) {
}

void UInventoryWidget::InitializeInventoryWidget_Implementation(UInventoryComponent* InventoryComponentRef, const TArray<FGuid>& NewMainContainerUIDs) {
}

void UInventoryWidget::InitContainers_Implementation(UInventoryComponent* InventoryComponentRef, const TArray<FGuid>& NewMainContainerUIDs) {
}


