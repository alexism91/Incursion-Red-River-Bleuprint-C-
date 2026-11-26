#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDistributionMode.generated.h"

UENUM()
enum class ENiagaraDistributionMode : int32 {
    Binding,
    Expression,
    UniformConstant,
    NonUniformConstant,
    UniformRange,
    NonUniformRange,
    UniformCurve,
    NonUniformCurve,
    ColorGradient,
};

