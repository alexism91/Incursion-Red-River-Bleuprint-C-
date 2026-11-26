#include "IRRExtractionManager.h"
#include "Net/UnrealNetwork.h"

UIRRExtractionManager::UIRRExtractionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExtractionWidget = NULL;
    this->DefaultExtractionCounter = 10;
    this->PlayersInExtractionZone = 0;
    this->PlayersAlive = 0;
    this->ExtractionCountdown = -1;
}

void UIRRExtractionManager::OnRep_PlayersInExtractionZone() {
}

void UIRRExtractionManager::OnRep_PlayersAlive() {
}

void UIRRExtractionManager::OnRep_ExtractionCountdown() {
}

void UIRRExtractionManager::OnPlayerPawnsUpdated(const TArray<AActor*>& Pawns) {
}




void UIRRExtractionManager::ForceExtraction_Implementation() {
}

void UIRRExtractionManager::ExtractionTimerFinished() {
}

void UIRRExtractionManager::ExitExtractionZone(ACharacter* Player) {
}

void UIRRExtractionManager::EnterExtractionZone(ACharacter* Player) {
}

void UIRRExtractionManager::CountdownTimer() {
}

void UIRRExtractionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRExtractionManager, PlayersInExtractionZone);
    DOREPLIFETIME(UIRRExtractionManager, PlayersAlive);
    DOREPLIFETIME(UIRRExtractionManager, ExtractionCountdown);
}


