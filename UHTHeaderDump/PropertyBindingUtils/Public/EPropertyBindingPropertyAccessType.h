#pragma once
#include "CoreMinimal.h"
#include "EPropertyBindingPropertyAccessType.generated.h"

UENUM(BlueprintType)
enum class EPropertyBindingPropertyAccessType : uint8 {
    Offset,
    Object,
    WeakObject,
    SoftObject,
    ObjectInstance,
    StructInstance,
    IndexArray,
    SharedStruct,
    StructInstanceContainer,
    Unset,
};

