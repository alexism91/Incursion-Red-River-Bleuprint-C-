#pragma once
#include "CoreMinimal.h"
#include "EBooleanOperationEnum.generated.h"

UENUM(BlueprintType)
enum class EBooleanOperationEnum : uint8 {
    Dataflow_And,
    Dataflow_Or,
    Dataflow_Not,
};

