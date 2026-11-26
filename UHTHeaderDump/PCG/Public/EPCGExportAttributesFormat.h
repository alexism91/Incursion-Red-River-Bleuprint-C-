#pragma once
#include "CoreMinimal.h"
#include "EPCGExportAttributesFormat.generated.h"

UENUM(BlueprintType)
enum class EPCGExportAttributesFormat : uint8 {
    Binary,
    Json,
};

