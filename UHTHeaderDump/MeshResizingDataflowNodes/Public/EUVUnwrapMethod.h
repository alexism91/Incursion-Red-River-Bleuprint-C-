#pragma once
#include "CoreMinimal.h"
#include "EUVUnwrapMethod.generated.h"

UENUM()
enum class EUVUnwrapMethod : int32 {
    ExponentialMap,
    ConformalFreeBoundary,
    SpectralConformal,
};

