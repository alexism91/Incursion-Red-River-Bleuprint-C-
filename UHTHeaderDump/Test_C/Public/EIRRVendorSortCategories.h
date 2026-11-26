#pragma once
#include "CoreMinimal.h"
#include "EIRRVendorSortCategories.generated.h"

UENUM(BlueprintType)
enum class EIRRVendorSortCategories : uint8 {
    Alphabetical,
    Stock,
    Price,
    Faction,
};

