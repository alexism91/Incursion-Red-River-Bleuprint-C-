#pragma once
#include "CoreMinimal.h"
#include "EModelingComponentsPlaneVisualizationMode.generated.h"

UENUM(BlueprintType)
enum class EModelingComponentsPlaneVisualizationMode : uint8 {
    SimpleGrid,
    HierarchicalGrid,
    FixedScreenAreaGrid,
};

