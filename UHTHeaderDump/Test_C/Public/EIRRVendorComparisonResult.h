#pragma once
#include "CoreMinimal.h"
#include "EIRRVendorComparisonResult.generated.h"

UENUM(BlueprintType)
enum class EIRRVendorComparisonResult : uint8 {
    Greater,
    Less,
    Equal,
};

