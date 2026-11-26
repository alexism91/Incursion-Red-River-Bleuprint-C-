#pragma once
#include "CoreMinimal.h"
#include "OnUnEquipDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnEquip, AActor*, User, FName, SlotName);

