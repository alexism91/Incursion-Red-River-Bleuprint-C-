#pragma once
#include "CoreMinimal.h"
#include "EIRRNotificationType.generated.h"

UENUM(BlueprintType)
enum class EIRRNotificationType : uint8 {
    Standard,
    Warning,
    Waiting,
};

