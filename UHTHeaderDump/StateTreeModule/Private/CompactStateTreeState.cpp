#include "CompactStateTreeState.h"

FCompactStateTreeState::FCompactStateTreeState() {
    this->LinkedAsset = NULL;
    this->ChildrenBegin = 0;
    this->ChildrenEnd = 0;
    this->EnterConditionsBegin = 0;
    this->UtilityConsiderationsBegin = 0;
    this->TransitionsBegin = 0;
    this->TasksBegin = 0;
    this->Weight = 0.00f;
    this->CustomTickRate = 0.00f;
    this->CompletionTasksMask = 0;
    this->CompletionTasksMaskBufferIndex = 0;
    this->CompletionTasksMaskBitsOffset = 0;
    this->CompletionTasksControl = EStateTreeTaskCompletionType::All;
    this->EnterConditionsNum = 0;
    this->UtilityConsiderationsNum = 0;
    this->TransitionsNum = 0;
    this->TasksNum = 0;
    this->EnabledTasksNum = 0;
    this->InstanceDataNum = 0;
    this->Depth = 0;
    this->Type = EStateTreeStateType::State;
    this->SelectionBehavior = EStateTreeStateSelectionBehavior::None;
    this->bHasTransitionTasks = false;
    this->bHasStateChangeConditions = false;
    this->bHasTickTriggerTransitions = false;
    this->bHasEventTriggerTransitions = false;
    this->bHasDelegateTriggerTransitions = false;
    this->bHasCompletedTriggerTransitions = false;
    this->bHasSucceededTriggerTransitions = false;
    this->bHasFailedTriggerTransitions = false;
    this->bCheckPrerequisitesWhenActivatingChildDirectly = false;
    this->bEnabled = false;
    this->bConsumeEventOnSelect = false;
    this->bHasCustomTickRate = false;
}

