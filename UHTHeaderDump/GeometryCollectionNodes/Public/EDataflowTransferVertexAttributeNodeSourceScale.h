#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferVertexAttributeNodeSourceScale.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferVertexAttributeNodeSourceScale : uint8 {
    Component_Edge,
    Asset_Edge,
    Asset_Bound,
    Dataflow_Max UMETA(Hidden),
};

