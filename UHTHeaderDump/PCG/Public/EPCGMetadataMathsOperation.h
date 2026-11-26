#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataMathsOperation.generated.h"

UENUM()
enum class EPCGMetadataMathsOperation : uint16 {
    UnaryOp = 1024,
    Sign,
    Frac,
    Truncate,
    Round,
    Sqrt,
    Abs,
    Floor,
    Ceil,
    OneMinus,
    Inc,
    Dec,
    Negate,
    BinaryOp = 2048,
    Add,
    Subtract,
    Multiply,
    Divide,
    Max,
    Min,
    Pow,
    ClampMin,
    ClampMax,
    Modulo,
    Set,
    TernaryOp = 4096,
    Clamp,
    Lerp,
    MulAdd,
};

