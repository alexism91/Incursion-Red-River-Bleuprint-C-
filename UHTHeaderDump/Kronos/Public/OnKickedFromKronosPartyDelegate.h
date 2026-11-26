#pragma once
#include "CoreMinimal.h"
#include "OnKickedFromKronosPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKickedFromKronosParty, const FText&, KickReason);

