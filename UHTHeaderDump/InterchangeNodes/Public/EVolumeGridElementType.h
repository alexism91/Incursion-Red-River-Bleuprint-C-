#pragma once
#include "CoreMinimal.h"
#include "EVolumeGridElementType.generated.h"

UENUM(BlueprintType)
enum class EVolumeGridElementType : uint8 {
    Unknown,
    Half,
    Float,
    Double,
};

