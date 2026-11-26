#include "ClothingActor.h"

AClothingActor::AClothingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUsePreset = false;
    this->ClothingSetup = NULL;
}

TArray<FClothingItem> AClothingActor::GetClothingItems() {
    return TArray<FClothingItem>();
}


