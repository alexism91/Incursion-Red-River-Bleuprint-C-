#pragma once
#include "CoreMinimal.h"
#include "EDataflowType.generated.h"

UENUM(BlueprintType)
enum class EDataflowType : uint8 {
    Construction,
    Simulation,
};

