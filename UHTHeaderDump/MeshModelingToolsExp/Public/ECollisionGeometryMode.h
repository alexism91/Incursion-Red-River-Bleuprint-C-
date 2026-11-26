#pragma once
#include "CoreMinimal.h"
#include "ECollisionGeometryMode.generated.h"

UENUM()
enum class ECollisionGeometryMode : int32 {
    Default,
    SimpleAndComplex,
    UseSimpleAsComplex,
    UseComplexAsSimple,
};

