#pragma once
#include "CoreMinimal.h"
#include "OnTargetSwitchedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetSwitched, AActor*, NewTarget);

