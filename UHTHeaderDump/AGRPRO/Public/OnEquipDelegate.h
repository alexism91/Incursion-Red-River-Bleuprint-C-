#pragma once
#include "CoreMinimal.h"
#include "OnEquipDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquip, AActor*, User, FName, SlotName);

