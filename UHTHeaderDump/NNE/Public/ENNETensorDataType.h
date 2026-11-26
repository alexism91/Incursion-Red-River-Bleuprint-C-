#pragma once
#include "CoreMinimal.h"
#include "ENNETensorDataType.generated.h"

UENUM(BlueprintType)
enum class ENNETensorDataType : uint8 {
    None,
    Char,
    Boolean,
    Half,
    Float,
    Double,
    Int8,
    Int16,
    Int32,
    Int64,
    UInt8,
    UInt16,
    UInt32,
    UInt64,
    Complex64,
    Complex128,
    BFloat16,
};

