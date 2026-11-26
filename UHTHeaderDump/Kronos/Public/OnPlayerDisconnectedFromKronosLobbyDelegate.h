#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDisconnectedFromKronosLobbyDelegate.generated.h"

class AKronosLobbyPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDisconnectedFromKronosLobby, AKronosLobbyPlayerState*, PlayerState);

