#include "AGR_ItemComponent.h"
#include "Net/UnrealNetwork.h"

UAGR_ItemComponent::UAGR_ItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bStackable = false;
    this->MaxStack = 1;
    this->CurrentStack = 1;
    this->Weight = 0.00f;
    this->Volume = 0.00f;
    this->SpaceSlots = 1;
    this->ItemName = TEXT("Item");
    this->bSimulateWhenDropped = false;
}

void UAGR_ItemComponent::UseItem(AActor* User, FGameplayTag GameplayTag) {
}

bool UAGR_ItemComponent::SplitItems(const int32 SplitSize) {
    return false;
}

void UAGR_ItemComponent::PickUpItem(UAGR_InventoryManager* InventoryPicking) {
}

void UAGR_ItemComponent::DropItem() {
}

void UAGR_ItemComponent::DestroyItem() {
}

void UAGR_ItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAGR_ItemComponent, ItemId);
    DOREPLIFETIME(UAGR_ItemComponent, InventoryId);
    DOREPLIFETIME(UAGR_ItemComponent, OwnerId);
    DOREPLIFETIME(UAGR_ItemComponent, bStackable);
    DOREPLIFETIME(UAGR_ItemComponent, MaxStack);
    DOREPLIFETIME(UAGR_ItemComponent, CurrentStack);
    DOREPLIFETIME(UAGR_ItemComponent, Weight);
    DOREPLIFETIME(UAGR_ItemComponent, Volume);
    DOREPLIFETIME(UAGR_ItemComponent, SpaceSlots);
    DOREPLIFETIME(UAGR_ItemComponent, ItemName);
    DOREPLIFETIME(UAGR_ItemComponent, bSimulateWhenDropped);
    DOREPLIFETIME(UAGR_ItemComponent, ItemTagSlotType);
}


