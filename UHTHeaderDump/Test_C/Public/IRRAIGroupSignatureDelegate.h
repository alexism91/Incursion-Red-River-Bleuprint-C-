#pragma once
#include "CoreMinimal.h"
#include "IRRAIGroupSignatureDelegate.generated.h"

class AIRRAIGroupController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAIGroupSignature, AIRRAIGroupController*, GroupController);

