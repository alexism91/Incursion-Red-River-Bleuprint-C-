#pragma once
#include "CoreMinimal.h"
#include "EMediaSourceEncoding.generated.h"

UENUM(BlueprintType)
enum class EMediaSourceEncoding : uint8 {
    MSE_None,
    MSE_Linear,
    MSE_sRGB,
    MSE_ST2084,
    MSE_SLog3 = 12,
};

