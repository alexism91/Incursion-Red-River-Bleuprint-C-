#pragma once
#include "CoreMinimal.h"
#include "EPCGDataLayerSource.generated.h"

UENUM(BlueprintType)
enum class EPCGDataLayerSource : uint8 {
    Self,
    DataLayerReferences,
};

