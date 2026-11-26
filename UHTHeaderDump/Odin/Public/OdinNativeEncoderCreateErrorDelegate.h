#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeEncoderCreateErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderCreateError, EOdinError, ErrorCode);

