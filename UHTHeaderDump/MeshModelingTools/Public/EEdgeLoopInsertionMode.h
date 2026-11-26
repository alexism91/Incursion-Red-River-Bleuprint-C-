#pragma once
#include "CoreMinimal.h"
#include "EEdgeLoopInsertionMode.generated.h"

UENUM()
enum class EEdgeLoopInsertionMode : int32 {
    Retriangulate,
    PlaneCut,
};

