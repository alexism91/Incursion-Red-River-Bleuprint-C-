#pragma once
#include "CoreMinimal.h"
#include "EAlignObjectsAlignToOptions.generated.h"

UENUM()
enum class EAlignObjectsAlignToOptions : int32 {
    FirstSelected,
    LastSelected,
    Combined,
};

