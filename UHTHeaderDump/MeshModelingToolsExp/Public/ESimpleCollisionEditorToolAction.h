#pragma once
#include "CoreMinimal.h"
#include "ESimpleCollisionEditorToolAction.generated.h"

UENUM(BlueprintType)
enum class ESimpleCollisionEditorToolAction : uint8 {
    NoAction,
    AddSphere,
    AddBox,
    AddCapsule,
    Duplicate,
    DeleteSelected,
    DeleteAll,
};

