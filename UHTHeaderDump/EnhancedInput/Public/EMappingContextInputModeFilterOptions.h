#pragma once
#include "CoreMinimal.h"
#include "EMappingContextInputModeFilterOptions.generated.h"

UENUM(BlueprintType)
enum class EMappingContextInputModeFilterOptions : uint8 {
    UseProjectDefaultQuery,
    UseCustomQuery,
    DoNotFilter,
};

