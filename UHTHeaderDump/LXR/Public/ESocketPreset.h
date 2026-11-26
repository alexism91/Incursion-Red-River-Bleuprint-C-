#pragma once
#include "CoreMinimal.h"
#include "ESocketPreset.generated.h"

UENUM(BlueprintType)
enum class ESocketPreset : uint8 {
    UE4_Mannequin,
    UE5_Mannequin,
    Custom,
};

