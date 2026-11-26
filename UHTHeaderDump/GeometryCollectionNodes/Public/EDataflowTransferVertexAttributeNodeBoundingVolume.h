#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferVertexAttributeNodeBoundingVolume.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferVertexAttributeNodeBoundingVolume : uint8 {
    Vertex,
    Triangle,
    Dataflow_Max UMETA(Hidden),
};

