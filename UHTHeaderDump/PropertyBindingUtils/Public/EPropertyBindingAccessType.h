#pragma once
#include "CoreMinimal.h"
#include "EPropertyBindingAccessType.generated.h"

UENUM(BlueprintType)
enum class EPropertyBindingAccessType : uint8 {
    Offset,
    Object,
    WeakObject,
    SoftObject,
    ObjectInstance,
    StructInstance,
    IndexArray,
};

