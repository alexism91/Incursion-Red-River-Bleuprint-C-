#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSweptHullAxis.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptSweptHullAxis : uint8 {
    X,
    Y,
    Z,
    SmallestBoxDimension,
    SmallestVolume,
};

