#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphValueType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphValueType : uint8 {
    None,
    Bool,
    Byte,
    Int32,
    Int64,
    Float,
    Double,
    Name,
    String,
    Text,
    Enum,
    Struct,
    Object,
    SoftObject,
    Class,
    SoftClass,
    UInt32,
    UInt64,
    Count,
};

