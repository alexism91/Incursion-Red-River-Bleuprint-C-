#pragma once
#include "CoreMinimal.h"
#include "EIRRSolverTestKind.generated.h"

UENUM(BlueprintType)
enum class EIRRSolverTestKind : uint8 {
    PeekPoint,
    FirePosition,
    StrafePosition,
    SpawnValidate,
};

