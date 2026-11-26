#pragma once
#include "CoreMinimal.h"
#include "EIRRThemePreviewMode.generated.h"

UENUM(BlueprintType)
enum class EIRRThemePreviewMode : uint8 {
    Conservative,
    Balanced,
    Aggressive,
};

