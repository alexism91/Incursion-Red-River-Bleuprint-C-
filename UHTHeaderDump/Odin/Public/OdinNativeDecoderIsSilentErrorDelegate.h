#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeDecoderIsSilentErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderIsSilentError, EOdinError, ErrorCode);

