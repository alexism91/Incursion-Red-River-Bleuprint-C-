#pragma once
#include "CoreMinimal.h"
#include "EDataflowTransferVertexAttributeNodeTransferMethod.generated.h"

UENUM(BlueprintType)
enum class EDataflowTransferVertexAttributeNodeTransferMethod : uint8 {
    Component,
    Global,
    None,
    Dataflow_Max UMETA(Hidden),
};

