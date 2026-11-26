#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanParameterMappingInputSourceType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanParameterMappingInputSourceType : uint8 {
    Parameter,
    Scalability,
    ConsoleVariable,
    Platform,
};

