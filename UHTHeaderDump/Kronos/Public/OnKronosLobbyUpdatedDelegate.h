#pragma once
#include "CoreMinimal.h"
#include "EKronosLobbyState.h"
#include "OnKronosLobbyUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKronosLobbyUpdated, const EKronosLobbyState, LobbyState, const int32, LobbyCountdownTime);

