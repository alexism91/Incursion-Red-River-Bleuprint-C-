#pragma once
#include "CoreMinimal.h"
#include "EKronosLobbyState.h"
#include "OnKronosLobbyStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosLobbyStateChanged, const EKronosLobbyState, LobbyState);

