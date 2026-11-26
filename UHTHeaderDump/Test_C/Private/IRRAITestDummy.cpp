#include "IRRAITestDummy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIRRAITestDummy::AIRRAITestDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DummyRole = EIRRTestDummyRole::Target;
    this->EyeHeight = 165.00f;
    this->bSnapToNavmesh = true;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Facing = CreateDefaultSubobject<UArrowComponent>(TEXT("Facing"));
    this->Billboard->SetupAttachment(RootComponent);
    this->Facing->SetupAttachment(RootComponent);
}


