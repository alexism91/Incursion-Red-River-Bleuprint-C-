#pragma once
#include "CoreMinimal.h"
#include "EPCGExportAttributesLayout.generated.h"

UENUM(BlueprintType)
enum class EPCGExportAttributesLayout : uint8 {
    ByElement,
    ByAttribute,
};

