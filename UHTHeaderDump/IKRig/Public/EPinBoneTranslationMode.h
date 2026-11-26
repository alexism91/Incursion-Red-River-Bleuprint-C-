#pragma once
#include "CoreMinimal.h"
#include "EPinBoneTranslationMode.generated.h"

UENUM(BlueprintType)
enum class EPinBoneTranslationMode : uint8 {
    CopyGlobalPosition,
    CopyLocalPosition,
    CopyLocalPositionRelativeOffset,
    CopyLocalPositionRelativeScaled,
    CopyGlobalPositionAndMaintainOffset,
};

