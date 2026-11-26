#pragma once
#include "CoreMinimal.h"
#include "EModularRigNotification.generated.h"

UENUM(BlueprintType)
enum class EModularRigNotification : uint8 {
    ModuleAdded,
    ModuleRenamed,
    ModuleRemoved,
    ModuleReparented,
    ConnectionChanged,
    ModuleConfigValueChanged,
    ModuleShortNameChanged,
    InteractionBracketOpened,
    InteractionBracketClosed,
    InteractionBracketCanceled,
    ModuleClassChanged,
    ModuleSelected,
    ModuleDeselected,
    Max,
};

