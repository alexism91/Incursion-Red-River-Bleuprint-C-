#include "IRRPlayerDangerComponent.h"
#include "Net/UnrealNetwork.h"

UIRRPlayerDangerComponent::UIRRPlayerDangerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInDanger = false;
    this->EngagingBotCount = 0;
}

void UIRRPlayerDangerComponent::OnRep_InDanger() {
}

bool UIRRPlayerDangerComponent::IsInDanger() const {
    return false;
}

void UIRRPlayerDangerComponent::HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

int32 UIRRPlayerDangerComponent::GetEngagingBotCount() const {
    return 0;
}

void UIRRPlayerDangerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRPlayerDangerComponent, bInDanger);
    DOREPLIFETIME(UIRRPlayerDangerComponent, EngagingBotCount);
}


