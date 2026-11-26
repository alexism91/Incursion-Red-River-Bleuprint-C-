#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterRenderingQuality.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterRenderingQuality : uint8 {
    Medium,
    High,
    Epic,
    Count,
};

