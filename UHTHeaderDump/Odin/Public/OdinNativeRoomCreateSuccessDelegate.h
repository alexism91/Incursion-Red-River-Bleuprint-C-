#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomCreateSuccessDelegate.generated.h"

class UOdinRoom;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomCreateSuccess, UOdinRoom*, room);

