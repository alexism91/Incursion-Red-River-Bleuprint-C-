#pragma once
#include "CoreMinimal.h"
#include "ECameraContextDataType.generated.h"

UENUM()
enum class ECameraContextDataType : int32 {
    Name,
    String,
    Enum,
    Struct,
    Object,
    Class,
    Count,
};

