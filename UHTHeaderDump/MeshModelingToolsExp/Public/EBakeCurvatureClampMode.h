#pragma once
#include "CoreMinimal.h"
#include "EBakeCurvatureClampMode.generated.h"

UENUM()
enum class EBakeCurvatureClampMode : int32 {
    None,
    OnlyPositive,
    OnlyNegative,
};

