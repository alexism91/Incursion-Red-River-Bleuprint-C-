#pragma once
#include "CoreMinimal.h"
#include "EStateTreeUpdatePhase.generated.h"

UENUM(BlueprintType)
enum class EStateTreeUpdatePhase : uint8 {
    Unset,
    StartTree,
    StopTree,
    StartGlobalTasks,
    StartGlobalTasksForSelection,
    StopGlobalTasks,
    StopGlobalTasksForSelection,
    TickStateTree,
    ApplyTransitions,
    TickTransitions,
    TriggerTransitions,
    TickingGlobalTasks,
    TickingTasks,
    TransitionConditions,
    StateSelection,
    TrySelectBehavior,
    EnterConditions,
    EnterStates,
    ExitStates,
    StateCompleted,
};

