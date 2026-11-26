#pragma once
#include "CoreMinimal.h"
#include "ERuntimePartitionCellBoundsMethod.generated.h"

UENUM(BlueprintType)
enum class ERuntimePartitionCellBoundsMethod : uint8 {
    UseContent,
    UseCellBounds,
    UseMinContentCellBounds,
};

