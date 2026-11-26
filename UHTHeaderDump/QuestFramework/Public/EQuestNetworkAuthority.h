#pragma once
#include "CoreMinimal.h"
#include "EQuestNetworkAuthority.generated.h"

UENUM(BlueprintType)
enum class EQuestNetworkAuthority : uint8 {
    None,
    HasAuthority,
    Remote,
};

