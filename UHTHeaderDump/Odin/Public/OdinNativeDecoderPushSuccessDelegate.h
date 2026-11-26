#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderPushSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeDecoderPushSuccess, uint32, datagram_length);

