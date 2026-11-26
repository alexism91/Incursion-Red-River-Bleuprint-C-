#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferNodeSampleScale.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferNodeSampleScale : uint8 {
    Dataflow_Transfer_Component_Edge,
    Dataflow_Transfer_Asset_Edge,
    Dataflow_Transfer_Asset_Bound,
    Dataflow_Transfer_Dataflow_Max UMETA(Hidden),
};

