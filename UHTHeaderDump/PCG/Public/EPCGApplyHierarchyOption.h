#pragma once
#include "CoreMinimal.h"
#include "EPCGApplyHierarchyOption.generated.h"

UENUM(BlueprintType)
enum class EPCGApplyHierarchyOption : uint8 {
    Always,
    Never,
    OptInByAttribute,
    OptOutByAttribute,
};

