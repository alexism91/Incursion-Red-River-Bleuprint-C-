#pragma once
#include "CoreMinimal.h"
#include "OnKronosLobbyPlayerNameChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosLobbyPlayerNameChanged, const FString&, PlayerName);

