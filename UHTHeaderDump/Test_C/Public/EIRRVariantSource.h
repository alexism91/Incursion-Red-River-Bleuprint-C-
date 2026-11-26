#pragma once
#include "CoreMinimal.h"
#include "EIRRVariantSource.generated.h"

UENUM(BlueprintType)
enum class EIRRVariantSource : uint8 {
    BuiltIn,
    Preset,
    Local,
};

