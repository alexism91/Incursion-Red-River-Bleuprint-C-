#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardRequestType.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardRequestType : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
};

