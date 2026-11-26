#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStatelessSpawnInfoType.generated.h"

UENUM()
enum class ENiagaraStatelessSpawnInfoType : int32 {
    Burst,
    Rate,
};

