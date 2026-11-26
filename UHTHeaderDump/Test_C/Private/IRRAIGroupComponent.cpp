#include "IRRAIGroupComponent.h"

UIRRAIGroupComponent::UIRRAIGroupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroupController = NULL;
}

void UIRRAIGroupComponent::OnPawnDeath(FIRRDamageData DamageData) {
}

bool UIRRAIGroupComponent::IsActorInGroup(const AActor* Actor) const {
    return false;
}

void UIRRAIGroupComponent::GetOtherGroupMembers(TArray<UIRRAIGroupComponent*>& Array) {
}

FIRRAIGroupMemberData UIRRAIGroupComponent::GetGroupMemberData() const {
    return FIRRAIGroupMemberData{};
}

AIRRAIGroupController* UIRRAIGroupComponent::GetGroupController() const {
    return NULL;
}


