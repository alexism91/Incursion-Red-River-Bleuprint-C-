#pragma once
#include "CoreMinimal.h"
#include "EOptimusDataTypeUsageFlags.generated.h"

UENUM(BlueprintType)
enum class EOptimusDataTypeUsageFlags : uint8 {
    None,
    Resource,
    Variable,
    AnimAttributes = 4,
    DataInterfaceOutput = 8,
    PinType = 16,
    PerBoneAnimAttribute = 32,
    Property = 64,
};

