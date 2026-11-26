#pragma once
#include "CoreMinimal.h"
#include "EPropertyBagAlterationResult.generated.h"

UENUM(BlueprintType)
enum class EPropertyBagAlterationResult : uint8 {
    Success,
    NoOperation = Success,
    InternalError,
    PropertyNameEmpty,
    PropertyNameInvalidCharacters,
    SourcePropertyNotFound,
    TargetPropertyNotFound,
    TargetPropertyAlreadyExists,
};

