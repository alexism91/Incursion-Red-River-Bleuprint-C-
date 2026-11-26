#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.generated.h"

UENUM(BlueprintType)
enum class ERigElementType : uint8 {
    None,
    Bone,
    Null,
    Space = Null,
    Control = 4,
    Curve = 8,
    Physics = 16,
    Reference = 32,
    Connector = 64,
    Socket = 128,
    First = Bone,
    Last = Socket,
    All = 239,
    ToResetAfterConstructionEvent = 141,
};

