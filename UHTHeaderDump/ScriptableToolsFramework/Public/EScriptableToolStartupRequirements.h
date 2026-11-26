#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolStartupRequirements.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolStartupRequirements : uint8 {
    None,
    ToolTarget,
    Custom,
};

