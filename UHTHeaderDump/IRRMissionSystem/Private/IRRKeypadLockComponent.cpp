#include "IRRKeypadLockComponent.h"
#include "Net/UnrealNetwork.h"

UIRRKeypadLockComponent::UIRRKeypadLockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRandomizeCode = true;
    this->CodeLength = 4;
    this->bStartLocked = true;
    this->bUnlockOwnerDoor = true;
    this->bLocked = true;
}

bool UIRRKeypadLockComponent::TryEnterCode(const FString& EnteredCode, AActor* Instigator) {
    return false;
}

void UIRRKeypadLockComponent::SetLocked(bool bNewLocked) {
}

void UIRRKeypadLockComponent::RollNewCode() {
}

void UIRRKeypadLockComponent::OnRep_Locked() {
}

bool UIRRKeypadLockComponent::IsLocked() const {
    return false;
}

FText UIRRKeypadLockComponent::GetDisplayName() const {
    return FText::GetEmpty();
}

FString UIRRKeypadLockComponent::GetCode() const {
    return TEXT("");
}

void UIRRKeypadLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRKeypadLockComponent, bLocked);
}


