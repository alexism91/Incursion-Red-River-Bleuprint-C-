#pragma once
#include "CoreMinimal.h"
#include "EStateTreeParameterDataType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeParameterDataType : uint8 {
    GlobalParameterData,
    ExternalGlobalParameterData,
};

