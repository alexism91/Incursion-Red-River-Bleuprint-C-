#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTrigOperation.generated.h"

UENUM()
enum class EPCGMetadataTrigOperation : uint16 {
    Acos,
    Asin,
    Atan,
    Atan2,
    Cos,
    Sin,
    Tan,
    DegToRad,
    RadToDeg,
};

