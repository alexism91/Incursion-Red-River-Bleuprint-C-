#pragma once
#include "CoreMinimal.h"
#include "ExtractionZoneOpenUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtractionZoneOpenUpdated, bool, bIsOpen);

