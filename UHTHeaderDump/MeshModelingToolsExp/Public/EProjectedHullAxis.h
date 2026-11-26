#pragma once
#include "CoreMinimal.h"
#include "EProjectedHullAxis.generated.h"

UENUM()
enum class EProjectedHullAxis : int32 {
    X,
    Y,
    Z,
    SmallestBoxDimension,
    SmallestVolume,
};

