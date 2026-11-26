#include "GameplayCueNotify_BurstLatent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AGameplayCueNotify_BurstLatent::AGameplayCueNotify_BurstLatent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bAutoDestroyOnRemove = true;
}



