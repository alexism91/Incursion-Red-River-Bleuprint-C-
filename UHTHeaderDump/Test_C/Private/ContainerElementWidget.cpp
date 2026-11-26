#include "ContainerElementWidget.h"

UContainerElementWidget::UContainerElementWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bTryAddToDescendant = false;
    this->bCanBeAdded = false;
    this->bCanBeSwapped = false;
    this->bCanBeDropped = false;
    this->bDropToRotation = false;
    this->DropToContainerIndex = 0;
    this->DropToSlotIndex = 0;
    this->bCanBeStacked = false;
    this->StackAmount = 0;
    this->InventoryComponent = NULL;
    this->ContainerRef = NULL;
    this->ContainerIndex = 0;
    this->bAllowTooltip = true;
    this->bAllowDragAndDrop = true;
    this->bAllowContextMenu = true;
    this->bAllowHover = true;
    this->bForceShowEnabled = false;
    this->bForceDefaultIcon = false;
    this->SlotGrid = NULL;
    this->SpecialContainerRef = NULL;
}

bool UContainerElementWidget::ValidateDrop_Implementation() {
    return false;
}

void UContainerElementWidget::UpdateStorageContainer(TArray<FContainerSlot> ContainerSlots) {
}

void UContainerElementWidget::SetItemSearch(const FString& NewItemSearch) {
}

void UContainerElementWidget::SetItemFilter(FGameplayTagContainer NewItemFilter) {
}

void UContainerElementWidget::RemoveItem_Implementation(FContainerItem ContainerItem) {
}

void UContainerElementWidget::OnContainerSearchStarted_Implementation() {
}

void UContainerElementWidget::OnContainerSearchCompleted_Implementation() {
}

void UContainerElementWidget::ItemUpdated_Implementation(FContainerItem ContainerItem) {
}


void UContainerElementWidget::InitContainerElement_Implementation(UInventoryComponent* NewInventoryComponent, UBaseContainerWidget* NewContainerRef, FGuid NewMainContainerUID, int32 NewContainerIndex) {
}

void UContainerElementWidget::HandleItemDrop_Implementation(UDragDropOperation* InOperation) {
}

void UContainerElementWidget::HandleHighlightSlots(TArray<int32> ToHighlightSlotIndexes) {
}

void UContainerElementWidget::HandleHighlightItems() {
}

void UContainerElementWidget::HandleDraggedItemChanged(UDragDropOperation* InOperation) {
}

void UContainerElementWidget::HandleDragEnter_Implementation(UDragDropOperation* InOperation, int32 SlotIndex, FVector2D SlotOffset) {
}

void UContainerElementWidget::HandleContainerSearchStarted(FGuid InMainContainerUID, int32 InContainerIndex, FContainerItem InContainerItem) {
}

void UContainerElementWidget::HandleContainerSearchCompleted(FGuid InMainContainerUID, int32 InContainerIndex, FContainerItem InContainerItem) {
}

void UContainerElementWidget::GetDropToData(int32 SlotIndex, FVector2D SlotOffset, FVector2D MousePosition, FVector2D ItemSize, int32& OutDropToSlotIndex, TArray<int32>& OutContainerSlotIndexes) {
}

void UContainerElementWidget::FinishDragOperation(bool bEndComparison) {
}

void UContainerElementWidget::CancelHighlights() {
}

void UContainerElementWidget::AddItem_Implementation(FContainerItem ContainerItem) {
}


