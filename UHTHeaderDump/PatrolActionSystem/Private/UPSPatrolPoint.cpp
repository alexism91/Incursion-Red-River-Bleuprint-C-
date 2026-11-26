#include "UPSPatrolPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

AUPSPatrolPoint::AUPSPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->BillboardComponent = (UBillboardComponent*)RootComponent;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->PatrolPointLinks.AddDefaulted(1);
    this->ArrowComponent->SetupAttachment(RootComponent);
}

void AUPSPatrolPoint::UpdatePatrolPointSettings(FPatrolPointSettings& NewSettings) {
}

FPatrolPointSettings AUPSPatrolPoint::GetPatrolPointSettings() {
    return FPatrolPointSettings{};
}

TArray<FPatrolPointLink> AUPSPatrolPoint::GetNextPatrolPointLinks() {
    return TArray<FPatrolPointLink>();
}

AUPSPatrolPoint* AUPSPatrolPoint::GetNextPatrolPoint(ACharacter* Character) {
    return NULL;
}

TArray<FPatrolPointLink> AUPSPatrolPoint::GetBackwardPatrolPointLinks() {
    return TArray<FPatrolPointLink>();
}

void AUPSPatrolPoint::AddNextLink(FPatrolPointLink Link) {
}


