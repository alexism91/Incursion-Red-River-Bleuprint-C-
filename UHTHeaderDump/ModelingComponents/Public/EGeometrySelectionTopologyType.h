#pragma once
#include "CoreMinimal.h"
#include "EGeometrySelectionTopologyType.generated.h"

UENUM(BlueprintType)
enum class EGeometrySelectionTopologyType : uint8 {
    Triangle = 1,
    Polygroup,
};

