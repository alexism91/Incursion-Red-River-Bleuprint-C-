#pragma once
#include "CoreMinimal.h"
#include "EDataflowSelectionType.generated.h"

UENUM(BlueprintType)
enum class EDataflowSelectionType : uint8 {
    Transform,
    Vertices,
    Faces,
    Geometry,
};

