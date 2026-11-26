#pragma once
#include "CoreMinimal.h"
#include "ESSInterfaceFlag.generated.h"

UENUM(BlueprintType)
enum class ESSInterfaceFlag : uint8 {
    ESS_None,
    ESS_SensePointsInterface = 4,
    ESS_SinglePointInterface = 8,
};

