#pragma once
#include "CoreMinimal.h"
#include "OdinRestGSTTEffectResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinRestGSTTEffectResponse, const FString&, Response);

