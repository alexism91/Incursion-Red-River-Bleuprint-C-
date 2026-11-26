#pragma once
#include "CoreMinimal.h"
#include "EIRRButtonType.generated.h"

UENUM(BlueprintType)
enum class EIRRButtonType : uint8 {
    Icon,
    Text,
    Widget,
};

