#include "IRRRoomDebugActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIRRRoomDebugActor::AIRRRoomDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RoomId = -1;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->BillboardComponent->SetupAttachment(RootComponent);
}


