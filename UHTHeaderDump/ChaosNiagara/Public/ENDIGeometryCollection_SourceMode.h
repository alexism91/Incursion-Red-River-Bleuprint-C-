#pragma once
#include "CoreMinimal.h"
#include "ENDIGeometryCollection_SourceMode.generated.h"

UENUM(BlueprintType)
enum class ENDIGeometryCollection_SourceMode : uint8 {
    Default,
    Source,
    AttachParent,
    DefaultCollectionOnly,
    ParameterBinding,
};

