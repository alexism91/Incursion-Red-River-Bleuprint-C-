#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanParameterValueType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanParameterValueType : uint8 {
    Invalid,
    Texture,
    Name,
    Color,
    Float,
    Bool,
};

