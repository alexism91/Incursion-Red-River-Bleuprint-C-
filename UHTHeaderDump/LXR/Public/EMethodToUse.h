#pragma once
#include "CoreMinimal.h"
#include "EMethodToUse.generated.h"

UENUM()
enum class EMethodToUse : int32 {
    None,
    Class,
    Interface,
    UObject,
};

