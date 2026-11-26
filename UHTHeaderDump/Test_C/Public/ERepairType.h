#pragma once
#include "CoreMinimal.h"
#include "ERepairType.generated.h"

UENUM(BlueprintType)
enum class ERepairType : uint8 {
    Material,
    Cash,
};

