#include "BaseContainerWidget.h"

UBaseContainerWidget::UBaseContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SpecialContainerWidgetParentRef = NULL;
    this->InventoryComponent = NULL;
}

void UBaseContainerWidget::SetItemSearch(const FString& NewItemSearch) {
}

void UBaseContainerWidget::RemoveContainer_Implementation() {
}

void UBaseContainerWidget::OnItemRemoved(FMainContainer MainContainer, FContainerItem Item) {
}

void UBaseContainerWidget::OnItemAdded(FMainContainer MainContainer, FContainerItem Item) {
}

void UBaseContainerWidget::InitContainer_Implementation(UInventoryComponent* NewInventoryComponent, FGuid NewMainContainerUID) {
}


