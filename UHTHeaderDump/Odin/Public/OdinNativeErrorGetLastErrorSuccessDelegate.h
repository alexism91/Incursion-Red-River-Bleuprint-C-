#pragma once
#include "CoreMinimal.h"
#include "OdinNativeErrorGetLastErrorSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeErrorGetLastErrorSuccess, const FString&, lastError);

