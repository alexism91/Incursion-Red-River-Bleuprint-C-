#include "LooseLoot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ALooseLoot::ALooseLoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SpawnChance = 1.00f;
    this->LootSettings = NULL;
    this->Root = (USceneComponent*)RootComponent;
}

void ALooseLoot::SpawnAndDestroyLooseLoot() {
}


