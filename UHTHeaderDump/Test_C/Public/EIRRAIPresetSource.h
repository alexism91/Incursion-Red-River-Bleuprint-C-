#pragma once
#include "CoreMinimal.h"
#include "EIRRAIPresetSource.generated.h"

UENUM(BlueprintType)
enum class EIRRAIPresetSource : uint8 {
    BuiltIn,
    Local,
    Workshop,
};

