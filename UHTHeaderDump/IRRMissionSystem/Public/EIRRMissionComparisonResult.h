#pragma once
#include "CoreMinimal.h"
#include "EIRRMissionComparisonResult.generated.h"

UENUM(BlueprintType)
enum class EIRRMissionComparisonResult : uint8 {
    Greater,
    Less,
    Equal,
};

