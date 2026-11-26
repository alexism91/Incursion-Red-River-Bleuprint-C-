#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterAccessLevel.generated.h"

UENUM(BlueprintType)
enum class ENiagaraParameterAccessLevel : uint8 {
    Private,
    Public,
};

