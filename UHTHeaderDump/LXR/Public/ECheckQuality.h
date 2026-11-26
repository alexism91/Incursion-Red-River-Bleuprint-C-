#pragma once
#include "CoreMinimal.h"
#include "ECheckQuality.generated.h"

UENUM()
enum class ECheckQuality : int32 {
    Low,
    Medium,
    High,
    Epic,
    Custom,
};

