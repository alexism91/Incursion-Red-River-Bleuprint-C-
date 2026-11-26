#pragma once
#include "CoreMinimal.h"
#include "OdinNativeTokenGeneratorGetAccessKeySuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeTokenGeneratorGetAccessKeySuccess, const FString&, accessKey);

