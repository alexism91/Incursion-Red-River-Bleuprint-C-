#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkHubAutoConnectMode.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkHubAutoConnectMode : uint8 {
    Disabled,
    All,
    LocalOnly,
};

