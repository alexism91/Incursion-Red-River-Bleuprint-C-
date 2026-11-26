#pragma once
#include "CoreMinimal.h"
#include "EResourceName.generated.h"

UENUM(BlueprintType)
enum class EResourceName : uint8 {
    Color,
    Albedo,
    Normal,
    Flow,
    Output,
};

