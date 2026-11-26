#pragma once
#include "CoreMinimal.h"
#include "EDrawPolygonExtrudeMode.generated.h"

UENUM(BlueprintType)
enum class EDrawPolygonExtrudeMode : uint8 {
    Flat,
    Fixed,
    Interactive,
};

