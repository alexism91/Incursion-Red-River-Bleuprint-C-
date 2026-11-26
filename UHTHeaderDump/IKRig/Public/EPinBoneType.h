#pragma once
#include "CoreMinimal.h"
#include "EPinBoneType.generated.h"

UENUM(BlueprintType)
enum class EPinBoneType : uint8 {
    FullTransform,
    TranslateOnly,
    RotateOnly,
    ScaleOnly,
};

