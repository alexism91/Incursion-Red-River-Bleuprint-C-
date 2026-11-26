#pragma once
#include "CoreMinimal.h"
#include "OnNavLinkFinishedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNavLinkFinished, APawn*, Agent);

