#pragma once
#include "CoreMinimal.h"
#include "OdinNativeTokenGeneratorSignSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorSignSuccess, const FString&, token);

