#pragma once
#include "CoreMinimal.h"
#include "ENSMInitialMeshOrientationMode.generated.h"

UENUM()
enum class ENSMInitialMeshOrientationMode : int32 {
    None,
    Random,
    OrientToAxis,
};

