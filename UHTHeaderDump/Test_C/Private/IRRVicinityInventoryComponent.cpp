#include "IRRVicinityInventoryComponent.h"
#include "EInventoryType.h"
#include "InventorySpatialContainerSettings.h"

UIRRVicinityInventoryComponent::UIRRVicinityInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryType = EInventoryType::Vicinity;
    this->bCanBeSaved = false;
    this->bShouldReplicate = false;
    this->RootContainerSettings = CreateDefaultSubobject<UInventorySpatialContainerSettings>(TEXT("VicinityContainerSettings"));
}

void UIRRVicinityInventoryComponent::SetScanning(bool bEnable) {
}

void UIRRVicinityInventoryComponent::RequestRescan() {
}

bool UIRRVicinityInventoryComponent::IsScanning() const {
    return false;
}

bool UIRRVicinityInventoryComponent::IsLooseLoot(const UInventoryComponent* OwnerComp) {
    return false;
}

void UIRRVicinityInventoryComponent::HandleTrackedPickupOwnerUpdated(UInventoryComponent* NewOwner) {
}

void UIRRVicinityInventoryComponent::HandleTrackedPickupItemUpdated(FPickUpContainerItem UpdatedPickupItem) {
}

void UIRRVicinityInventoryComponent::HandleTrackedInventoryUpdated() {
}

int32 UIRRVicinityInventoryComponent::GetRows() const {
    return 0;
}

FGuid UIRRVicinityInventoryComponent::GetRootContainerUID() const {
    return FGuid{};
}

int32 UIRRVicinityInventoryComponent::GetColumns() const {
    return 0;
}


