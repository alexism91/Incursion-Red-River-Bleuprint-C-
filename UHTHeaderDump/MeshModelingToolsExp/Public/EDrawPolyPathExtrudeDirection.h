#pragma once
#include "CoreMinimal.h"
#include "EDrawPolyPathExtrudeDirection.generated.h"

UENUM()
enum class EDrawPolyPathExtrudeDirection : int32 {
    SelectionNormal,
    WorldX,
    WorldY,
    WorldZ,
    LocalX,
    LocalY,
    LocalZ,
};

