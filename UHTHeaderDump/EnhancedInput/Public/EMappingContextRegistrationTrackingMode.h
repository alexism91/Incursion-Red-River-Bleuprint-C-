#pragma once
#include "CoreMinimal.h"
#include "EMappingContextRegistrationTrackingMode.generated.h"

UENUM(BlueprintType)
enum class EMappingContextRegistrationTrackingMode : uint8 {
    Untracked,
    CountRegistrations,
};

