#pragma once
#include "CoreMinimal.h"
#include "EPCGLandscapeCacheSerializationMode.generated.h"

UENUM(BlueprintType)
enum class EPCGLandscapeCacheSerializationMode : uint8 {
    SerializeOnlyAtCook,
    NeverSerialize,
    AlwaysSerialize,
};

