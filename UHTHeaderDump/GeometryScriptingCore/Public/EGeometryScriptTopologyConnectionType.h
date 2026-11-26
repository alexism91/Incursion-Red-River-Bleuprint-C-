#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptTopologyConnectionType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptTopologyConnectionType : uint8 {
    Geometric,
    Polygroup,
    MaterialID,
};

