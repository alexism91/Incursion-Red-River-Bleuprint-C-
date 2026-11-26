#pragma once
#include "CoreMinimal.h"
#include "AirdropEventDelegate.generated.h"

class AAirdrop;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAirdropEvent, AAirdrop*, Airdrop);

