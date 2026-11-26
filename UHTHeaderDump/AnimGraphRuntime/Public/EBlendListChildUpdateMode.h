#pragma once
#include "CoreMinimal.h"
#include "EBlendListChildUpdateMode.generated.h"

UENUM(BlueprintType)
enum class EBlendListChildUpdateMode : uint8 {
    Default,
    ResetChildOnActivate,
    AlwaysTickChildren,
};

