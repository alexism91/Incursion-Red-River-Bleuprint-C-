#pragma once
#include "CoreMinimal.h"
#include "EquipmentSlot.h"
#include "OnEquipmentComponentInitializedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentComponentInitialized, TArray<FEquipmentSlot>, FinalEquipmentSlots, bool, bInitialized);

