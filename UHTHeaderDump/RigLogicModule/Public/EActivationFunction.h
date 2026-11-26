#pragma once
#include "CoreMinimal.h"
#include "EActivationFunction.generated.h"

UENUM(BlueprintType)
enum class EActivationFunction : uint8 {
    Linear,
    ReLU,
    LeakyReLU,
    Tanh,
    Sigmoid,
};

