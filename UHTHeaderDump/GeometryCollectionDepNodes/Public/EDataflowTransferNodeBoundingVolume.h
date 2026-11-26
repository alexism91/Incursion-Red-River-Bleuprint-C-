#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferNodeBoundingVolume.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferNodeBoundingVolume : uint8 {
    Dataflow_Transfer_Vertex,
    Dataflow_Transfer_Triangle,
    Dataflow_Transfer_Dataflow_Max UMETA(Hidden),
};

