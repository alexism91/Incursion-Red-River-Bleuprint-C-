#pragma once
#include "CoreMinimal.h"
#include "EIRRMissionSortCategories.generated.h"

UENUM(BlueprintType)
enum class EIRRMissionSortCategories : uint8 {
    Alphabetical,
    Location,
    Faction,
    State,
};

