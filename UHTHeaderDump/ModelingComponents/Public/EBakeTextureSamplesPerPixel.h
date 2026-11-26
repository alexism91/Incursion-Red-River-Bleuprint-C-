#pragma once
#include "CoreMinimal.h"
#include "EBakeTextureSamplesPerPixel.generated.h"

UENUM()
enum class EBakeTextureSamplesPerPixel : int32 {
    Sample1 = 1,
    Sample4 = 4,
    Sample16 = 16,
    Sample64 = 64,
    Sample256 = 256,
};

