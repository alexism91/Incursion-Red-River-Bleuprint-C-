#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyRefType.generated.h"

UENUM(BlueprintType)
enum class EStateTreePropertyRefType : uint8 {
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
};

