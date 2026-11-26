#include "ItemContext.h"

UItemContext::UItemContext() {
    this->ContextIcon = NULL;
    this->bAddToRewards = false;
    this->bAddToVendor = false;
    this->bAddToInspector = true;
    this->bHideoutSupported = true;
    this->bInGameSupported = true;
    this->bValidIfPending = false;
}

bool UItemContext::ShouldAddToContextList_Implementation(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item) {
    return false;
}

bool UItemContext::IsValidContext_Implementation(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item) {
    return false;
}

bool UItemContext::HasValidTriggerActions_Implementation(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item) {
    return false;
}

AActor* UItemContext::GetOwningActor() const {
    return NULL;
}

FName UItemContext::GetItemContextText_Implementation(AActor* Owner, UItemWidget* ItemRef) {
    return NAME_None;
}

void UItemContext::Execute_Implementation(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item) {
}


