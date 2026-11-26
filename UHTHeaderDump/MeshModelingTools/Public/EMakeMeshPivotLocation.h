#pragma once
#include "CoreMinimal.h"
#include "EMakeMeshPivotLocation.generated.h"

UENUM(BlueprintType)
enum class EMakeMeshPivotLocation : uint8 {
    Base,
    Centered,
    Top,
};

