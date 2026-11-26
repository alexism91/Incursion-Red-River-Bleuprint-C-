#pragma once
#include "CoreMinimal.h"
#include "OdinNativeInitializeSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeInitializeSuccess, const FString&, Version);

