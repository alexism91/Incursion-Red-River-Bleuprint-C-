#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeDecoderPushErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderPushError, EOdinError, ErrorCode);

