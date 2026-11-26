#pragma once
#include "CoreMinimal.h"
#include "OdinNativeErrorGetLastErrorErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeErrorGetLastErrorError, const FString&, reason);

