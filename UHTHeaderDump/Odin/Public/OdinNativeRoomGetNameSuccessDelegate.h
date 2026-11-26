#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomGetNameSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomGetNameSuccess, const FString&, roomName);

