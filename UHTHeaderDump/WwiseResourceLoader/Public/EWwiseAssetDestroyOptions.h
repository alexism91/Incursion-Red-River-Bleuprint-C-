#pragma once
#include "CoreMinimal.h"
#include "EWwiseAssetDestroyOptions.generated.h"

UENUM(BlueprintType)
enum class EWwiseAssetDestroyOptions : uint8 {
    StopEventOnDestroy,
    WaitForEventEnd,
};

