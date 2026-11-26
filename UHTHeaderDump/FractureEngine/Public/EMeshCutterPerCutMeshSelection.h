#pragma once
#include "CoreMinimal.h"
#include "EMeshCutterPerCutMeshSelection.generated.h"

UENUM(BlueprintType)
enum class EMeshCutterPerCutMeshSelection : uint8 {
    All,
    Random,
    Sequential,
};

