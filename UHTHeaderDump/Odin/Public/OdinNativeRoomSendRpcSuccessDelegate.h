#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomSendRpcSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomSendRpcSuccess, const FString&, Json);

