#pragma once
#include "CoreMinimal.h"
#include "ELocalExposureMethod.generated.h"

UENUM(BlueprintType)
enum class ELocalExposureMethod : uint8 {
    Bilateral,
    Fusion,
};

