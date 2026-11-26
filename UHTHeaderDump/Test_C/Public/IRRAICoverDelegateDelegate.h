#pragma once
#include "CoreMinimal.h"
#include "IRRAICoverData.h"
#include "IRRAICoverDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAICoverDelegate, const FIRRAICoverData&, CoverInUse);

