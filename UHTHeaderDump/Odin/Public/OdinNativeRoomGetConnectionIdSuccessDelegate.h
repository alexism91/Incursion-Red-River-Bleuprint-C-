#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomGetConnectionIdSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeRoomGetConnectionIdSuccess, uint64, connectionId);

