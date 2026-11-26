#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptDebugMessageType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptDebugMessageType : uint8 {
    ErrorMessage,
    WarningMessage,
};

