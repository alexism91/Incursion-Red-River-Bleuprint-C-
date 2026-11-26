#pragma once
#include "CoreMinimal.h"
#include "EIRRMissionNetworkExecType.generated.h"

UENUM(BlueprintType)
enum class EIRRMissionNetworkExecType : uint8 {
    OnlyServer,
    OnlyClient,
    Both,
};

