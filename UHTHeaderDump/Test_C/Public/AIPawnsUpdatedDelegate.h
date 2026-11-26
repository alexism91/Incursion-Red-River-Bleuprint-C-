#pragma once
#include "CoreMinimal.h"
#include "AIPawnsUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIPawnsUpdated, const TArray<AActor*>&, OutActors);

