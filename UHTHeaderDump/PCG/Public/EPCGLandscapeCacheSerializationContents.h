#pragma once
#include "CoreMinimal.h"
#include "EPCGLandscapeCacheSerializationContents.generated.h"

UENUM(BlueprintType)
enum class EPCGLandscapeCacheSerializationContents : uint8 {
    SerializeOnlyPositionsAndNormals,
    SerializeOnlyLayerData,
    SerializeAll,
};

