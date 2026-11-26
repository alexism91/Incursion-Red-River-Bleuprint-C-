#pragma once
#include "CoreMinimal.h"
#include "EVerseEffectSet.generated.h"

UENUM(BlueprintType, Flags)
enum class EVerseEffectSet : uint8 {
    None,
    Suspends,
    Decides,
    Diverges = 4,
    Reads = 8,
    Writes = 16,
    Allocates = 32,
    NoRollback = 64,
    EVerseEffectSet_MAX = 128 UMETA(Hidden),
};

