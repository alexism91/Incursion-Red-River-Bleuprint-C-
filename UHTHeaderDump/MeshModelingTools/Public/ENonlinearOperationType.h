#pragma once
#include "CoreMinimal.h"
#include "ENonlinearOperationType.generated.h"

UENUM()
enum class ENonlinearOperationType : int8 {
    Bend,
    Flare,
    Twist,
};

