#pragma once
#include "CoreMinimal.h"
#include "EConnectorType.generated.h"

UENUM(BlueprintType)
enum class EConnectorType : uint8 {
    Primary,
    Secondary,
};

