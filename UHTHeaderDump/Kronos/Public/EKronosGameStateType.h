#pragma once
#include "CoreMinimal.h"
#include "EKronosGameStateType.generated.h"

UENUM(BlueprintType)
enum class EKronosGameStateType : uint8 {
    NONE,
    Hideout,
    InGame,
    Lobby,
};

