#include "AGR_InventoryManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UAGR_InventoryManager::UAGR_InventoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->InventoryStorage = NULL;
    this->bDebug = false;
}

bool UAGR_InventoryManager::RemoveItemsOfClass(const TSubclassOf<AActor> Class, const int32 Quantity, FText& OutNote) {
    return false;
}

void UAGR_InventoryManager::OverwriteId(const FGuid InInventoryId) {
}

bool UAGR_InventoryManager::HasExactItem(AActor* Item) {
    return false;
}

bool UAGR_InventoryManager::HasEnoughItems(const TSubclassOf<AActor> Item, const int32 Quantity, FText& OutNote) {
    return false;
}

bool UAGR_InventoryManager::GetAllItemsOfTagSlotType(const FGameplayTag SlotTypeFilter, TArray<AActor*>& OutItemsWithTag) {
    return false;
}

bool UAGR_InventoryManager::GetAllItemsOfClass(const TSubclassOf<AActor> Class, TArray<AActor*>& OutFilteredArray) {
    return false;
}

TArray<AActor*> UAGR_InventoryManager::GetAllItems() {
    return TArray<AActor*>();
}

void UAGR_InventoryManager::AddItemToInventoryDirectly(AActor* Item) {
}

bool UAGR_InventoryManager::AddItemsOfClass(const TSubclassOf<AActor> Class, const int32 Quantity, FText& OutNote) {
    return false;
}

void UAGR_InventoryManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAGR_InventoryManager, InventoryId);
    DOREPLIFETIME(UAGR_InventoryManager, InventoryStorage);
}


