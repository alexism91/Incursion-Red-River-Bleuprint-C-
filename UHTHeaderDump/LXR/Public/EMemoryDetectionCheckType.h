#pragma once
#include "CoreMinimal.h"
#include "EMemoryDetectionCheckType.generated.h"

UENUM(BlueprintType)
enum class EMemoryDetectionCheckType : uint8 {
    None,
    RelevantAndVisibility,
    Visibility,
};

