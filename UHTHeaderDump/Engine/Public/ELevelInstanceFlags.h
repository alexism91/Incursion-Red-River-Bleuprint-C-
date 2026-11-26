#pragma once
#include "CoreMinimal.h"
#include "ELevelInstanceFlags.generated.h"

UENUM(BlueprintType)
enum class ELevelInstanceFlags : uint8 {
    None,
    IsInEditHierarchy,
    HasPropertyOverrides,
    HasEditablePropertyOverrides = 4,
};

