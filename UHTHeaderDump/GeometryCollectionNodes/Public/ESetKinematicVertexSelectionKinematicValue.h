#pragma once
#include "CoreMinimal.h"
#include "ESetKinematicVertexSelectionKinematicValue.generated.h"

UENUM(BlueprintType)
enum class ESetKinematicVertexSelectionKinematicValue : uint8 {
    SetKinematic,
    SetNonKinematic,
};

