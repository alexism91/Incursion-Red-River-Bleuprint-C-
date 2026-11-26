#include "IRRLevelZone_LEGACY.h"
#include "IRRMarkerComponent.h"

AIRRLevelZone_LEGACY::AIRRLevelZone_LEGACY(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->MarkerComponent = CreateDefaultSubobject<UIRRMarkerComponent>(TEXT("MarkerComponent"));
}

void AIRRLevelZone_LEGACY::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIRRLevelZone_LEGACY::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AIRRLevelZone_LEGACY::IsPawnInZone(APawn* Pawn) {
    return false;
}

TArray<APawn*> AIRRLevelZone_LEGACY::GetPlayersInZone() {
    return TArray<APawn*>();
}

TArray<APawn*> AIRRLevelZone_LEGACY::GetPawnsInZone() {
    return TArray<APawn*>();
}

TArray<APawn*> AIRRLevelZone_LEGACY::GetAIsInZone() {
    return TArray<APawn*>();
}


