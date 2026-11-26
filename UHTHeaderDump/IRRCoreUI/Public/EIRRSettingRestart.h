#pragma once
#include "CoreMinimal.h"
#include "EIRRSettingRestart.generated.h"

UENUM(BlueprintType)
enum class EIRRSettingRestart : uint8 {
    Never,
    Always,
    BetweenOptions,
};

