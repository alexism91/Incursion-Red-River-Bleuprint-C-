#include "IRRLevelTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

AIRRLevelTrigger::AIRRLevelTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineThickness = 0.00f;
    this->bShowVisualsInGame = false;
    this->bAutoRegister = false;
    this->LabelComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LabelComponent"));
    this->LabelComponent->SetupAttachment(RootComponent);
}

void AIRRLevelTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIRRLevelTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIRRLevelTrigger::OnCharacterActivated(AIRRBaseCharacter* Character) {
}





bool AIRRLevelTrigger::IsPawnInZone(APawn* Pawn) {
    return false;
}

TArray<APawn*> AIRRLevelTrigger::GetPlayersInZone() {
    return TArray<APawn*>();
}

TArray<APawn*> AIRRLevelTrigger::GetPawnsInZone() {
    return TArray<APawn*>();
}

TArray<APawn*> AIRRLevelTrigger::GetAIsInZone() {
    return TArray<APawn*>();
}


