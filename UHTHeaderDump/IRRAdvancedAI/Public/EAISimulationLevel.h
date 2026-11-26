#pragma once
#include "CoreMinimal.h"
#include "EAISimulationLevel.generated.h"

UENUM(BlueprintType)
enum class EAISimulationLevel : uint8 {
    POTATO,
    LOW,
    NORMAL,
    HIGH,
    CUSTOM,
};

