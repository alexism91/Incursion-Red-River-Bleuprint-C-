#pragma once
#include "CoreMinimal.h"
#include "EElementNameDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EElementNameDisplayMode : uint8 {
    AssetDefault,
    Auto,
    ForceShort,
    ForceLong,
};

