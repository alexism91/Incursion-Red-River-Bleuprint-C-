#pragma once
#include "CoreMinimal.h"
#include "EGroupEdgeInsertionMode.generated.h"

UENUM()
enum class EGroupEdgeInsertionMode : int32 {
    Retriangulate,
    PlaneCut,
};

