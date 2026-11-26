#pragma once
#include "CoreMinimal.h"
#include "EOdinError.h"
#include "OdinNativeRoomSendRpcErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomSendRpcError, EOdinError, ErrorCode);

