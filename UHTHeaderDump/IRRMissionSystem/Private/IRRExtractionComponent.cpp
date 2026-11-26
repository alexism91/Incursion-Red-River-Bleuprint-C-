#include "IRRExtractionComponent.h"
#include "Net/UnrealNetwork.h"

UIRRExtractionComponent::UIRRExtractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysOpen = false;
    this->DefaultOpenChance = 0.50f;
    this->bOpen = false;
}

void UIRRExtractionComponent::Open() {
}

void UIRRExtractionComponent::OnRep_Open() {
}

void UIRRExtractionComponent::Close() {
}

void UIRRExtractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRExtractionComponent, bOpen);
    DOREPLIFETIME(UIRRExtractionComponent, TimeToChangeState);
}


