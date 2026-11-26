#pragma once
#include "CoreMinimal.h"
#include "EMemoryCheckClass.generated.h"

UENUM(BlueprintType)
enum class EMemoryCheckClass : uint8 {
    None,
    Detection,
    Sense,
};

