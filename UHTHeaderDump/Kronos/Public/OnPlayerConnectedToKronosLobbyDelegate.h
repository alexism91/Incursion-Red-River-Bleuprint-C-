#pragma once
#include "CoreMinimal.h"
#include "OnPlayerConnectedToKronosLobbyDelegate.generated.h"

class AKronosLobbyPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerConnectedToKronosLobby, AKronosLobbyPlayerState*, PlayerState);

