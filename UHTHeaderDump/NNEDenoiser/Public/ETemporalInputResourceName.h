#pragma once
#include "CoreMinimal.h"
#include "ETemporalInputResourceName.generated.h"

UENUM(BlueprintType)
enum class ETemporalInputResourceName : uint8 {
    Color,
    Albedo,
    Normal,
    Flow,
    Output,
};

