#pragma once
#include "CoreMinimal.h"
#include "EPCGConversionStatus.generated.h"

UENUM(BlueprintType)
enum class EPCGConversionStatus : uint8 {
    Uninitialized,
    InitializedGraph,
    InitializedSource,
    DataPrepared = 4,
    StructuralChangesApplied = 8,
    Complete = 15,
};

