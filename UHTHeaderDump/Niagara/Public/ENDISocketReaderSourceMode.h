#pragma once
#include "CoreMinimal.h"
#include "ENDISocketReaderSourceMode.generated.h"

UENUM(BlueprintType)
enum class ENDISocketReaderSourceMode : uint8 {
    Default,
    ParameterBindingOnly,
    AttachedParentOnly,
    SourceOnly,
};

