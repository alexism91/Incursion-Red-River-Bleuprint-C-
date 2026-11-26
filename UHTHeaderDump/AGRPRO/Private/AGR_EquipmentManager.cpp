#include "AGR_EquipmentManager.h"
#include "Net/UnrealNetwork.h"

UAGR_EquipmentManager::UAGR_EquipmentManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

bool UAGR_EquipmentManager::UnEquipItemFromSlot(const FName Slot, AActor*& OutItemUnequipped) {
    return false;
}

bool UAGR_EquipmentManager::UnEquipByReference(AActor* ItemActor, FText& OutNote) {
    return false;
}

void UAGR_EquipmentManager::SetupDefineSlots(const TArray<FEquipment> InEquipmentList) {
}

void UAGR_EquipmentManager::SaveShortcutReference(const FName Key, AActor* Item) {
}

bool UAGR_EquipmentManager::GetShortcutReference(const FName Key, AActor*& OutActor) {
    return false;
}

bool UAGR_EquipmentManager::GetItemInSlot(const FName Slot, AActor*& OutItem) {
    return false;
}

bool UAGR_EquipmentManager::GetAllItems(TArray<AActor*>& OutItems) {
    return false;
}

bool UAGR_EquipmentManager::EquipItemInSlot(const FName Slot, AActor* ItemActor, AActor*& OutPreviousItem, AActor*& OutNewItem) {
    return false;
}

void UAGR_EquipmentManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAGR_EquipmentManager, EquipmentList);
}


