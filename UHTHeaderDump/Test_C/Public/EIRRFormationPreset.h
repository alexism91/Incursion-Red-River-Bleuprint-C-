#pragma once
#include "CoreMinimal.h"
#include "EIRRFormationPreset.generated.h"

UENUM(BlueprintType)
enum class EIRRFormationPreset : uint8 {
    Custom,
    Column,
    StaggeredColumn,
    Wedge,
    Line,
    StaggeredLine,
    EchelonRight,
    EchelonLeft,
    Diamond,
};

