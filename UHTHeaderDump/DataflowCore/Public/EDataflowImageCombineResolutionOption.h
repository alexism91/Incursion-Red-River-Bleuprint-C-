#pragma once
#include "CoreMinimal.h"
#include "EDataflowImageCombineResolutionOption.generated.h"

UENUM()
enum class EDataflowImageCombineResolutionOption : int32 {
    Lowest,
    Highest,
    UserDefined,
};

