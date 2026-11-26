#pragma once
#include "CoreMinimal.h"
#include "EQuestNetworkExecType.generated.h"

UENUM(BlueprintType)
enum class EQuestNetworkExecType : uint8 {
    OnlyServer,
    OnlyClient,
    Both,
};

