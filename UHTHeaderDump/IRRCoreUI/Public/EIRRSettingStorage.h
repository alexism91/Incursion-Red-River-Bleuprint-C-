#pragma once
#include "CoreMinimal.h"
#include "EIRRSettingStorage.generated.h"

UENUM(BlueprintType)
enum class EIRRSettingStorage : uint8 {
    Shared,
    Local,
};

