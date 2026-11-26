#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderPopSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOdinNativeDecoderPopSuccess, const TArray<float>&, Samples, bool, isSilent);

