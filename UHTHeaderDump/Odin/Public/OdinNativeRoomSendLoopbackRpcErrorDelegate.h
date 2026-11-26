#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeRoomSendLoopbackRpcErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomSendLoopbackRpcError, EOdinError, ErrorCode);

