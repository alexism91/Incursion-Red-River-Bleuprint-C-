#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderIsSilentSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderIsSilentSuccess, bool, silent);

