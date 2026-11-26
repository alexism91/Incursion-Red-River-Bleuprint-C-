#include "StateTreeTaskBlueprintBase.h"

UStateTreeTaskBlueprintBase::UStateTreeTaskBlueprintBase() {
    this->bShouldStateChangeOnReselect = true;
    this->bShouldCallTickOnlyOnEvents = false;
    this->bShouldCopyBoundPropertiesOnTick = true;
    this->bShouldCopyBoundPropertiesOnExitState = true;
}

void UStateTreeTaskBlueprintBase::UnbindDelegate(const FStateTreeDelegateListener& Listener) {
}







void UStateTreeTaskBlueprintBase::FinishTask(const bool bSucceeded) {
}

void UStateTreeTaskBlueprintBase::BroadcastDelegate(FStateTreeDelegateDispatcher Dispatcher) {
}

void UStateTreeTaskBlueprintBase::BindDelegate(const FStateTreeDelegateListener& Listener, const FStateTreeDynamicDelegate& Delegate) {
}


