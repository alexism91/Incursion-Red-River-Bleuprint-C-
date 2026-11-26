#pragma once
#include "CoreMinimal.h"
#include "ENeuralProfileRuntimeType.generated.h"

UENUM(BlueprintType)
enum class ENeuralProfileRuntimeType : uint8 {
    NNERuntimeORTDml,
    NNERuntimeRDGHlsl,
    MAX,
};

