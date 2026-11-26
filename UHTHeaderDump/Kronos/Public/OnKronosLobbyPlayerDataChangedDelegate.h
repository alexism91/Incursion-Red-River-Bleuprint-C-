#pragma once
#include "CoreMinimal.h"
#include "OnKronosLobbyPlayerDataChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKronosLobbyPlayerDataChanged, const TArray<int32>&, PlayerData);

