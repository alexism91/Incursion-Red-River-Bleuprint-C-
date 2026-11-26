#include "IRRAISearchGrid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIRRAISearchGrid::AIRRAISearchGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->BillboardComponent->SetupAttachment(RootComponent);
}


