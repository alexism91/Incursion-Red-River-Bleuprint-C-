#pragma once
#include "CoreMinimal.h"
#include "OnKronosLobbyPlayerIsReadyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosLobbyPlayerIsReadyChanged, bool, bIsReady);

