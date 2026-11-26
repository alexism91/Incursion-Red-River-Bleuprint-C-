#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptErrorType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptErrorType : uint8 {
    NoError,
    UnknownError,
    InvalidInputs,
    OperationFailed,
};

