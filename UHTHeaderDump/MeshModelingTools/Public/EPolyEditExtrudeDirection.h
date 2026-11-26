#pragma once
#include "CoreMinimal.h"
#include "EPolyEditExtrudeDirection.generated.h"

UENUM()
enum class EPolyEditExtrudeDirection : int32 {
    SelectionNormal,
    WorldX,
    WorldY,
    WorldZ,
    LocalX,
    LocalY,
    LocalZ,
};

