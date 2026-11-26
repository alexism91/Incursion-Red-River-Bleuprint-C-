#include "StateTreeNodeBlueprintBase.h"

UStateTreeNodeBlueprintBase::UStateTreeNodeBlueprintBase() {
}

void UStateTreeNodeBlueprintBase::SendEvent(const FStateTreeEvent& Event) {
}

void UStateTreeNodeBlueprintBase::RequestTransition(const FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority) {
}


bool UStateTreeNodeBlueprintBase::IsPropertyRefValid(const FStateTreeBlueprintPropertyRef& PropertyRef) const {
    return false;
}

void UStateTreeNodeBlueprintBase::GetPropertyReference(const FStateTreeBlueprintPropertyRef& PropertyRef) const {
}

FText UStateTreeNodeBlueprintBase::GetPropertyDescriptionByPropertyName(FName PropertyName) const {
    return FText::GetEmpty();
}


