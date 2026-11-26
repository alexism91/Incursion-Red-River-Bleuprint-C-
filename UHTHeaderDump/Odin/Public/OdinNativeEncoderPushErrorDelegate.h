#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeEncoderPushErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderPushError, EOdinError, ErrorCode);

