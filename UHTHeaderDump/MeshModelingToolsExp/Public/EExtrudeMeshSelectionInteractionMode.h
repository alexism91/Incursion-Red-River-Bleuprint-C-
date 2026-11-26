#pragma once
#include "CoreMinimal.h"
#include "EExtrudeMeshSelectionInteractionMode.generated.h"

UENUM(BlueprintType)
enum class EExtrudeMeshSelectionInteractionMode : uint8 {
    Interactive,
    Fixed,
};

