#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderPushSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderPushSuccess, uint32, samples_count);

