#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeEncoderIsSilentErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderIsSilentError, EOdinError, ErrorCode);

