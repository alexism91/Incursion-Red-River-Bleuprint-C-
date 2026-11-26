#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterCameraFrame.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterCameraFrame : uint8 {
    Auto,
    Face,
    Body,
    Far,
    Count,
};

