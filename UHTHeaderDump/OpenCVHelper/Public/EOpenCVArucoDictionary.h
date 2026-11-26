#pragma once
#include "CoreMinimal.h"
#include "EOpenCVArucoDictionary.generated.h"

UENUM(BlueprintType)
enum class EOpenCVArucoDictionary : uint8 {
    Dict4x4,
    Dict5x5,
    Dict6x6,
    Dict7x7,
    DictOriginal,
};

