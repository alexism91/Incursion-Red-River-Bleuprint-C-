#pragma once
#include "CoreMinimal.h"
#include "OnEquippableChangedDelegate.generated.h"

class UEquippableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquippableChanged, UEquippableComponent*, EquippableComponent);

