#include "ItemAction.h"

UItemAction::UItemAction() {
    this->bForwardToPickupActor = true;
    this->CustomEffect = NULL;
    this->UseCost = 0.00f;
    this->bDropWhenUsedUp = true;
}

void UItemAction::Execute_Implementation(AActor* Owner, UUserWidget* ItemRef, FContainerItem ContainerItem) {
}

bool UItemAction::CanStart_Implementation(AActor* Owner, UUserWidget* ItemRef, FContainerItem ContainerItem) {
    return false;
}

bool UItemAction::CanApplyAnyEffect(AActor* Owner, FContainerItem ContainerItem) {
    return false;
}

int32 UItemAction::ApplyEffects(AActor* Owner, FContainerItem ContainerItem) {
    return 0;
}


