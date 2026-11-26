#include "ClothingItem.h"

FClothingItem::FClothingItem() {
    this->ClothMesh_LEGACY = NULL;
    this->bMeshEntriesMigrated = false;
    this->FP = false;
    this->TP = false;
    this->ClothComponentRef = NULL;
}

