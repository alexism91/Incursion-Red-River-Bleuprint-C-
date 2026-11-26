#pragma once
#include "CoreMinimal.h"
#include "ECopyOpSettingsContext.generated.h"

UENUM(BlueprintType)
enum class ECopyOpSettingsContext : uint8 {
    PreInitialize,
    Runtime,
};

