#include "InventorySettings.h"

UInventorySettings::UInventorySettings() {
    this->StashSaveGameName = TEXT("StashSaveGame");
    this->InventorySaveGameName = TEXT("InventorySaveGame");
    this->VendorSaveGameName = TEXT("VendorSaveGame");
    this->GunsmithGameName = TEXT("GunsmithSaveGame");
    this->VicinityRadius = 250.00f;
    this->VicinityReachTolerance = 150.00f;
    this->VicinityColumns = 5;
    this->VicinityMinRows = 10;
    this->VicinityFreeRows = 1;
    this->bVicinityFixedSize = false;
    this->VicinityFixedRows = 6;
    this->VicinityMaxItems = 40;
    this->VicinityScanInterval = 0.25f;
    this->bVicinityRequireLineOfSight = true;
}


