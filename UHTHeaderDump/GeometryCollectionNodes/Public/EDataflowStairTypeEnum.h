#pragma once
#include "CoreMinimal.h"
#include "EDataflowStairTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EDataflowStairTypeEnum : uint8 {
    Linear,
    Floating,
    Curved,
    Spiral,
};

