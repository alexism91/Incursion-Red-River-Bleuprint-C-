#pragma once
#include "CoreMinimal.h"
#include "EQuickTransformerMode.generated.h"

UENUM(BlueprintType)
enum class EQuickTransformerMode : uint8 {
    AxisTranslation,
    AxisRotation,
};

