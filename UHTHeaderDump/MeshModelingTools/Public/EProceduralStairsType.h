#pragma once
#include "CoreMinimal.h"
#include "EProceduralStairsType.generated.h"

UENUM()
enum class EProceduralStairsType : int32 {
    Linear,
    Floating,
    Curved,
    Spiral,
};

