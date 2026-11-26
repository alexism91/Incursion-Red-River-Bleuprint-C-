#pragma once
#include "CoreMinimal.h"
#include "ENeuralModelTileType.generated.h"

UENUM(BlueprintType)
enum class ENeuralModelTileType : uint8 {
    OneByOne,
    TwoByTwo,
    FourByFour,
    EightByEight,
    Auto,
};

