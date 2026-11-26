#pragma once
#include "CoreMinimal.h"
#include "EPinBoneRotationMode.generated.h"

UENUM(BlueprintType)
enum class EPinBoneRotationMode : uint8 {
    CopyGlobalRotation,
    MaintainOffsetFromBoneToCopyFrom,
};

