#pragma once
#include "CoreMinimal.h"
#include "ERigMetaDataNameSpace.generated.h"

UENUM(BlueprintType)
enum class ERigMetaDataNameSpace : uint8 {
    None,
    Self,
    Parent,
    Root,
    Last,
};

