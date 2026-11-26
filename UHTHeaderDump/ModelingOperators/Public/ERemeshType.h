#pragma once
#include "CoreMinimal.h"
#include "ERemeshType.generated.h"

UENUM(BlueprintType)
enum class ERemeshType : uint8 {
    Standard,
    FullPass,
    NormalFlow,
};

