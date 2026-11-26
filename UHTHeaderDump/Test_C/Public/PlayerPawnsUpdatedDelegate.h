#pragma once
#include "CoreMinimal.h"
#include "PlayerPawnsUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerPawnsUpdated, const TArray<AActor*>&, OutActors);

