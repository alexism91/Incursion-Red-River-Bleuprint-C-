#pragma once
#include "CoreMinimal.h"
#include "NavMapSignatureDelegate.generated.h"

class UIRRNavAreaMap;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNavMapSignature, const UIRRNavAreaMap*, NavMap);

