#pragma once
#include "CoreMinimal.h"
#include "ESelectionByAttrGroup.generated.h"

UENUM(BlueprintType)
enum class ESelectionByAttrGroup : uint8 {
    Vertices,
    Faces,
    Transform,
    Geometry,
    Material,
};

