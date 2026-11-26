#include "IRRSpawnZoneVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AIRRSpawnZoneVolume::AIRRSpawnZoneVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Zone"));
    this->bAutoBotCount = true;
    this->AreaPerBotM2 = 150.00f;
    this->Box = (UBoxComponent*)RootComponent;
}


