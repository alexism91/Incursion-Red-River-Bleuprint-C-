#include "ItemDragDropOperation.h"

UItemDragDropOperation::UItemDragDropOperation() {
    this->ItemOwnerComp = NULL;
    this->ItemWidgetRef = NULL;
    this->bRotated = false;
    this->ReplaceWithDefinition = NULL;
}

bool UItemDragDropOperation::TryToggleForm(FString& OutError) {
    return false;
}

void UItemDragDropOperation::RotateItem_Implementation(bool& OutRotation) {
}


UIRRItemDefinition* UItemDragDropOperation::GetSourceDefinition() const {
    return NULL;
}


