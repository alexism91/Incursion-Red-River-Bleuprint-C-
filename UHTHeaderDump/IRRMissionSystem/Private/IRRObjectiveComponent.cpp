#include "IRRObjectiveComponent.h"
#include "Net/UnrealNetwork.h"

UIRRObjectiveComponent::UIRRObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIRRObjectiveComponent::RemoveBinding(const FIRRMissionWorldBinding& BindingToRemove) {
}

void UIRRObjectiveComponent::OnRep_Bindings() {
}

bool UIRRObjectiveComponent::HasBindings() const {
    return false;
}

TArray<FIRRMissionWorldBinding> UIRRObjectiveComponent::GetBindings() const {
    return TArray<FIRRMissionWorldBinding>();
}

void UIRRObjectiveComponent::ClearBindings() {
}

void UIRRObjectiveComponent::AddBinding(const FIRRMissionWorldBinding& NewBinding) {
}

void UIRRObjectiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRObjectiveComponent, Bindings);
}


