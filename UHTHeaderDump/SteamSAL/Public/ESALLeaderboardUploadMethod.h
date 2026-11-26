#pragma once
#include "CoreMinimal.h"
#include "ESALLeaderboardUploadMethod.generated.h"

UENUM(BlueprintType)
enum class ESALLeaderboardUploadMethod : uint8 {
    KeepBestScore,
    ForceUpdate,
};

