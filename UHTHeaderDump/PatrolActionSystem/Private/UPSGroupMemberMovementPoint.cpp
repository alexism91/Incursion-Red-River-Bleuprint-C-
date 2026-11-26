#include "UPSGroupMemberMovementPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

AUPSGroupMemberMovementPoint::AUPSGroupMemberMovementPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->BillboardComponent = (UBillboardComponent*)RootComponent;
}


