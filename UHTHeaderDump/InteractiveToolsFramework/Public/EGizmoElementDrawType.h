#pragma once
#include "CoreMinimal.h"
#include "EGizmoElementDrawType.generated.h"

UENUM(BlueprintType)
enum class EGizmoElementDrawType : uint8 {
    None,
    Fill = 2,
    Line = 4,
    FillAndLine = 6,
};

