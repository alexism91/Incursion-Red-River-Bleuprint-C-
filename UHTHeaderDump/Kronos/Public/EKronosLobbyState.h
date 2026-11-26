#pragma once
#include "CoreMinimal.h"
#include "EKronosLobbyState.generated.h"

UENUM(BlueprintType)
enum class EKronosLobbyState : uint8 {
    Initializing,
    WaitingForPlayers,
    WaitingToStart,
    StartingMatch,
    MatchStarted,
};

