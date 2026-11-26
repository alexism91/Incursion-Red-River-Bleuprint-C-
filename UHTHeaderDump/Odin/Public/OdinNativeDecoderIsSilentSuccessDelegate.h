#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderIsSilentSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderIsSilentSuccess, bool, silent);

