#pragma once
#include "CoreMinimal.h"
#include "ENormalCalculationMethod.generated.h"

UENUM(BlueprintType)
enum class ENormalCalculationMethod : uint8 {
    AreaWeighted,
    AngleWeighted,
    AreaAngleWeighting,
};

