#pragma once
#include "CoreMinimal.h"
#include "EMultiTransformerMode.generated.h"

UENUM(BlueprintType)
enum class EMultiTransformerMode : uint8 {
    DefaultGizmo = 1,
    QuickAxisTranslation,
};

