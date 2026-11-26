#pragma once
#include "CoreMinimal.h"
#include "CoverNavMapUpdatedDelegate.generated.h"

class ACoverSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoverNavMapUpdated, const ACoverSystem*, CoverSystem);

