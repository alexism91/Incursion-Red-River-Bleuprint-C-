#pragma once
#include "CoreMinimal.h"
#include "ERigHierarchyNotification.generated.h"

UENUM(BlueprintType)
enum class ERigHierarchyNotification : uint8 {
    ElementAdded,
    ElementRemoved,
    ElementRenamed,
    ElementSelected,
    ElementDeselected,
    ParentChanged,
    HierarchyReset,
    ControlSettingChanged,
    ControlVisibilityChanged,
    ControlDrivenListChanged,
    ControlShapeTransformChanged,
    ParentWeightsChanged,
    InteractionBracketOpened,
    InteractionBracketClosed,
    ElementReordered,
    ConnectorSettingChanged,
    SocketColorChanged,
    SocketDescriptionChanged,
    SocketDesiredParentChanged,
    HierarchyCopied,
    ComponentAdded,
    ComponentRemoved,
    ComponentContentChanged,
    ComponentSelected,
    ComponentDeselected,
    ComponentRenamed,
    ComponentReparented,
    ShortNameChanged,
    Max,
};

