#pragma once
#include "CoreMinimal.h"
#include "EDataflowGeometryCollectionDynamicState.generated.h"

UENUM(BlueprintType)
enum class EDataflowGeometryCollectionDynamicState : uint8 {
    None,
    Dynamic,
    Kinematic,
    Static,
};

