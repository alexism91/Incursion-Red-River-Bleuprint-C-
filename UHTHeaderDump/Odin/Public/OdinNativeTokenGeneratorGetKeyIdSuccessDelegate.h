#pragma once
#include "CoreMinimal.h"
#include "OdinNativeTokenGeneratorGetKeyIdSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorGetKeyIdSuccess, const FString&, keyId);

