#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferVertexAttributeNodeFalloff.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferVertexAttributeNodeFalloff : uint8 {
    Squared,
    Linear,
    None,
    Dataflow_Max UMETA(Hidden),
};

