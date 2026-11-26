#pragma once
#include "CoreMinimal.h"
#include "ENetworkMetricEnableMode.generated.h"

UENUM(BlueprintType)
enum class ENetworkMetricEnableMode : uint8 {
    EnableForAllReplication,
    EnableForIrisOnly,
    EnableForNonIrisOnly,
};

