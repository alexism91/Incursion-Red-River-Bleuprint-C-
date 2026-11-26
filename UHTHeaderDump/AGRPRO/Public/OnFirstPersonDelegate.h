#pragma once
#include "CoreMinimal.h"
#include "OnFirstPersonDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstPerson, bool, bIsFirstPersonView);

