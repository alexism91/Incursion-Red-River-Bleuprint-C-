#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPruneBoneWeightsAssignmentType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPruneBoneWeightsAssignmentType : uint8 {
    RenormalizeRemaining,
    ReassignToParent,
};

