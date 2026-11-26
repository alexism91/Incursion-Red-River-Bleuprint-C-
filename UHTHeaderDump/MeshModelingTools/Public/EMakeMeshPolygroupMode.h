#pragma once
#include "CoreMinimal.h"
#include "EMakeMeshPolygroupMode.generated.h"

UENUM(BlueprintType)
enum class EMakeMeshPolygroupMode : uint8 {
    PerShape,
    PerFace,
    PerQuad,
};

