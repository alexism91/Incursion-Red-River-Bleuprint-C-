#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkTopologyMode.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkTopologyMode : uint8 {
    Hub,
    Spoke,
    UnrealClient,
    External,
};

