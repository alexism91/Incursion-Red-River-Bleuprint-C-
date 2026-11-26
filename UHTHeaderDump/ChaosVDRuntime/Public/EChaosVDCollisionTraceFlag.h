#pragma once
#include "CoreMinimal.h"
#include "EChaosVDCollisionTraceFlag.generated.h"

UENUM()
enum class EChaosVDCollisionTraceFlag : int32 {
    UseDefault,
    UseSimpleAndComplex,
    UseSimpleAsComplex,
    UseComplexAsSimple,
    MAX,
};

