#pragma once
#include "CoreMinimal.h"
#include "EDataLayerLoadFilter.generated.h"

UENUM(BlueprintType)
enum class EDataLayerLoadFilter : uint8 {
    None,
    ClientOnly,
    ServerOnly,
};

