#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanBuildStatus.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanBuildStatus : uint8 {
    Succeeded,
    Failed,
};

