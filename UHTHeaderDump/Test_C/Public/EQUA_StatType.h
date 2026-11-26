#pragma once
#include "CoreMinimal.h"
#include "EQUA_StatType.generated.h"

UENUM(BlueprintType)
enum class EQUA_StatType : uint8 {
    Durability,
    Accuracy,
    Ergonomics,
    Recoil,
    MuzzleVelocity,
    Range,
    SightingRange,
    RPM,
    Weight,
    Health,
    ArmorPoints,
    Caliber,
    FireModes,
    TurnSpeed,
};

