#pragma once
#include "CoreMinimal.h"
#include "IRRAIGrenadeThrowSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIGrenadeThrowSignature, const bool, bThrown);

