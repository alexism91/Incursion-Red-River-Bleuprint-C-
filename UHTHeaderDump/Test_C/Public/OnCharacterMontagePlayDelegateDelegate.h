#pragma once
#include "CoreMinimal.h"
#include "OnCharacterMontagePlayDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMontagePlayDelegate, FName, NotifyName);

