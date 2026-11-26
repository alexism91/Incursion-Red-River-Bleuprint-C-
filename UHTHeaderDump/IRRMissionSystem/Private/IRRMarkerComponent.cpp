#include "IRRMarkerComponent.h"
#include "Net/UnrealNetwork.h"

UIRRMarkerComponent::UIRRMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->CustomOwner = NULL;
    this->bIsAdded = false;
    this->bIsSelected = false;
}

void UIRRMarkerComponent::ToggleMarker(bool bAdd) {
}

void UIRRMarkerComponent::SetCustomOwner(AActor* NewOwner) {
}

void UIRRMarkerComponent::SelectMarker(bool bSelect) {
}

void UIRRMarkerComponent::OnRep_IsSelected() {
}

bool UIRRMarkerComponent::IsSelectable() const {
    return false;
}

TArray<FIRRMissionWorldBinding> UIRRMarkerComponent::GetMissionBindings() const {
    return TArray<FIRRMissionWorldBinding>();
}

FIRRMissionWorldBinding UIRRMarkerComponent::GetMissionBinding() const {
    return FIRRMissionWorldBinding{};
}

FIRRMarkerSettings UIRRMarkerComponent::GetMarkerSettings() {
    return FIRRMarkerSettings{};
}

FVector2D UIRRMarkerComponent::GetMarkerLocation() {
    return FVector2D{};
}

AActor* UIRRMarkerComponent::GetCustomOwner() {
    return NULL;
}

void UIRRMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMarkerComponent, CustomOwner);
    DOREPLIFETIME(UIRRMarkerComponent, bIsAdded);
    DOREPLIFETIME(UIRRMarkerComponent, bIsSelected);
}


