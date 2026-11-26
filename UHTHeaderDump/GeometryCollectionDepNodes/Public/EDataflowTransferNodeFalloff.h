#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferNodeFalloff.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferNodeFalloff : uint8 {
    Dataflow_Transfer_Squared,
    Dataflow_Transfer_Linear,
    Dataflow_Transfer_None,
    Dataflow_Transfer_Dataflow_Max UMETA(Hidden),
};

