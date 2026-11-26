#pragma once
#include "CoreMinimal.h"
#include "EInputResourceName.generated.h"

UENUM(BlueprintType)
enum class EInputResourceName : uint8 {
    Color,
    Albedo,
    Normal,
    Output,
};

