#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderPopSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOdinNativeEncoderPopSuccess, const TArray<uint8>&, datagram);

