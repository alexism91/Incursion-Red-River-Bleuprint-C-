#pragma once
#include "CoreMinimal.h"
#include "EOptimusDeformerExecutionPhase.generated.h"

UENUM(BlueprintType)
enum class EOptimusDeformerExecutionPhase : uint8 {
    AfterDefaultDeformer,
    OverrideDefaultDeformer,
    BeforeDefaultDeformer,
};

