#pragma once
#include "CoreMinimal.h"
#include "OdinCloneEffectResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinCloneEffectResponse, const FString&, Response);

