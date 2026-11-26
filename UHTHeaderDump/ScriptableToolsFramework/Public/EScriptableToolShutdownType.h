#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolShutdownType.generated.h"

UENUM(BlueprintType)
enum class EScriptableToolShutdownType : uint8 {
    Complete,
    AcceptCancel,
};

